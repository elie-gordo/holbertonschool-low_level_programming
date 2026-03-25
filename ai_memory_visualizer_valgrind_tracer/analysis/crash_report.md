# Task 2 - AI Assisted Crash Report

## Crash confirmation
Program:
- `programs/crash_example`

Observed behavior:
- Normal run ends with segmentation fault.
- Exit status observed: `139` (SIGSEGV).
- Valgrind reports: `Invalid write of size 4` at `crash_example.c:32`, address `0x0`.

## Root cause analysis (deterministic chain)
1. `main` sets `n = 0` (`crash_example.c:25`).
2. `nums = allocate_numbers(n)` (`crash_example.c:30`).
3. In `allocate_numbers`, guard `if (n <= 0) return NULL;` triggers (`crash_example.c:9-10`).
4. Control returns to `main` with `nums == NULL`.
5. `nums[0] = 42` (`crash_example.c:32`) dereferences null pointer and attempts a write at address `0x0`.
6. OS raises SIGSEGV because address `0x0` is unmapped for user writes.

This is a direct null-pointer dereference, not random behavior.

## Why the access is invalid
- `nums` is a stack variable (pointer object) in `main`.
- The pointee is expected to be a heap array, but allocation did not occur for `n=0`.
- Therefore there is no valid object at `nums[0]`.
- Access category: invalid write to unmapped address (`NULL`), i.e. undefined behavior.

## Memory category involved
- Stack memory: pointer variable `nums` itself.
- Heap memory: none successfully allocated for `nums` in this path.
- Faulting access target: neither valid stack nor valid heap; it is address `0x0`.

## AI suggestions review
AI suggestion A (correct):
- "Check for `NULL` after `allocate_numbers` before dereferencing `nums`."

Assessment:
- Correct and directly addresses the invalid access.

AI suggestion B (incorrect/speculative):
- "The crash may be due to stack overflow or recursion depth."

Why incorrect:
- Program has no recursion and minimal stack usage.
- Valgrind pinpoints a null write at `crash_example.c:32`; this fully explains the crash.

## Optional fix (clearly labeled)
Optional fix:
- Add guard in `main`:
  - if `nums == NULL`, report invalid input/allocation failure and return before `nums[0]` access.
- Alternative: ensure caller passes `n > 0`.
