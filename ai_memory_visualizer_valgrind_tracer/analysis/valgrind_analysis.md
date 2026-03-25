# Task 1 - Valgrind and AI Memory Tracer

## Commands used
```bash
cd programs
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./heap_example
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./aliasing_example
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./crash_example
```

## Program: `heap_example`

### Valgrind findings
- `definitely lost: 6 bytes in 1 blocks`
- Allocation site: `person_new` at `heap_example.c:21`
- Call chain to allocation: `main` at `heap_example.c:51`

### Classification
- Error type: memory leak (`definitely lost`).
- Memory object: heap block for `alice->name` (string "Alice" + `\0`, 6 bytes).

### Causal memory explanation
- `person_new` allocates two heap objects per person: struct `Person` (`heap_example.c:14`) and `name` buffer (`heap_example.c:21`).
- `bob` is fully deallocated (`heap_example.c:66-67`).
- `alice` is deallocated through `person_free_partial` (`heap_example.c:69`), but that helper frees only the struct (`heap_example.c:41`), not `p->name`.
- Result: ownership of `alice->name` is lost when `alice` is freed, so the block becomes unreachable.

## Program: `aliasing_example`

### Valgrind findings
1. `Invalid read of size 4` at `aliasing_example.c:42`.
2. `Invalid write of size 4` at `aliasing_example.c:44`.
3. `Invalid read of size 4` at `aliasing_example.c:45`.

All three refer to an address inside a 20-byte heap block previously freed at `aliasing_example.c:38`, originally allocated at `aliasing_example.c:12`.

### Classification
- Error type: use-after-free (invalid read/write on freed heap memory).
- Memory object: heap block returned by `make_numbers(n)` containing `int[5]`.

### Causal memory explanation
- `b = a` at `aliasing_example.c:34` creates aliasing.
- `free(a)` at line 38 ends the lifetime of the heap block.
- `b` is now dangling but still used at lines 42, 44, 45.
- This is not a leak (Valgrind correctly reports all blocks freed), but invalid accesses remain.

## Program: `crash_example` (additional Valgrind trace)

### Valgrind findings
- `Invalid write of size 4` at `crash_example.c:32`.
- Address: `0x0` (not stack, heap, or freed block).
- Process terminates with `SIGSEGV`.

### Classification
- Error type: null pointer dereference.
- Memory object involved: none valid; attempted write to unmapped address 0.

### Causal memory explanation
- `n = 0` (`crash_example.c:25`) -> `allocate_numbers(0)` returns `NULL` (`crash_example.c:9-10`).
- `nums` remains `NULL`.
- `nums[0] = 42` (`crash_example.c:32`) attempts write through null pointer.

## Use of uninitialized memory
- No `Conditional jump or move depends on uninitialised value(s)` reported in these runs.
- Therefore, for this bundle and these inputs, Valgrind reports leaks and invalid accesses, but no uninitialized-read defect.

## AI critique (required)
Initial AI hypothesis (partially incorrect):
- "In `crash_example`, the 4096 bytes `still reachable` indicates a leak that explains the crash."

Why incorrect:
- `still reachable` here comes from libc stdio buffer allocation during `puts`, not from program-owned leaked objects.
- The crash is caused by invalid write to `0x0` at `crash_example.c:32`, independent of that reachable block.

Correct interpretation:
- Root defect is null dereference (invalid write).
- `still reachable` line is diagnostic context, not root cause of the fault.
