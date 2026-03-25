# Task 0 - AI Memory Visualizer

## Scope and method
Programs analyzed for this task:
- `programs/stack_example.c` (mandatory)
- `programs/aliasing_example.c` (mandatory)
- `programs/heap_example.c` (optional, included)

Compilation/run used:
```bash
cd programs
make
./stack_example
./aliasing_example
./heap_example
```

All addresses below are representative runtime observations, not constants.

## 1) `stack_example.c`: stack frames and lifetimes

### Key execution points
1. `main` calls `walk_stack(0, 3)` (`stack_example.c:35`).
2. Each recursive call creates a new `walk_stack` frame with its own `marker` (`stack_example.c:21`).
3. `dump_frame` creates its own frame with `local_int`, `local_buf[16]`, `p_local` (`stack_example.c:5-7`).
4. On return, each frame is destroyed in reverse order.

### Memory map (depth 2 -> depth 3 transition)
At depth 2 (before recursive call):
- Stack frame `walk_stack(depth=2)` contains `marker=20`.
- `dump_frame("enter",2)` frame already returned; its locals are dead.

After calling `walk_stack(depth=3)`:
- New stack frame `walk_stack(depth=3)` is created.
- Inside `dump_frame("enter",3)`, new locals are created:
  - `local_int=103`
  - `local_buf[0]='D'`
  - `p_local=&local_int`
- These objects exist only until `dump_frame` returns.

### Lifetime conclusions
- `marker`, `local_int`, and `local_buf` are stack objects with automatic storage duration.
- None of these objects remains valid after its function returns.
- Address pattern decreases with recursion depth on this run, consistent with downward-growing stack on this platform.

## 2) `aliasing_example.c`: aliasing and dangling pointer

### Key execution points
1. `a = make_numbers(n)` allocates one heap block for 5 ints (`aliasing_example.c:12,30`).
2. `b = a` creates aliasing (`aliasing_example.c:34`): `a` and `b` point to the same heap block.
3. `free(a)` releases that heap block (`aliasing_example.c:38`).
4. `b` still holds the old address but now points to deallocated memory (dangling pointer).
5. Reads/writes via `b` (`aliasing_example.c:42,44,45`) are use-after-free.

### Memory map (before and after `free(a)`)
Before `free(a)`:
- Stack: `a`, `b`, `n`.
- Heap block H1: `int[5]`.
- `a -> H1`, `b -> H1`.

After `free(a)`:
- H1 lifetime ended.
- `a` and `b` values still contain the same address bits, but that address no longer denotes a valid live object.
- Any dereference of `a` or `b` is invalid.

### Ownership conclusion
- Ownership effectively belongs to the allocation result (`a` at creation).
- Once aliases exist, freeing through one alias invalidates all aliases.

## 3) `heap_example.c`: heap ownership and partial deallocation

### Key execution points
1. `person_new` allocates `Person` (`heap_example.c:14`) then `name` (`heap_example.c:21`).
2. In `main`, two persons are allocated: `alice`, `bob` (`heap_example.c:51-52`).
3. `bob` is fully released (`free(bob->name); free(bob);` at lines 66-67).
4. `alice` is partially released via `person_free_partial(alice)` which frees only struct `Person`, not `alice->name` (`heap_example.c:36-42,69`).

### Memory map at program end
- `bob` and `bob->name`: freed, no live ownership.
- `alice` struct: freed.
- `alice->name`: leaked (heap block lifetime not ended before process exit).

## AI critique (required)
Initial AI hypothesis (incorrect):
- "After `free(a)`, pointer `b` becomes `NULL`, so only writes are dangerous."

Why incorrect:
- `free` does not modify other aliases.
- `b` remains non-`NULL` but dangling; both reads and writes are invalid.

Correction:
- `b[2]` read (`aliasing_example.c:42`) and `b[3]` write (`aliasing_example.c:44`) are both use-after-free operations on the same deallocated heap block.
