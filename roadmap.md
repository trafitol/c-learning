### Phase 1: C language proper (weeks 1–8) — IN PROGRESS
- [x] Variables, types, operators
- [x] printf, scanf, format specifiers
- [x] Control flow: if/else, for, while, switch, break, continue
- [x] Accumulator pattern
- [x] Functions: definition, parameters, return values, void
- [x] Predicate functions
- [x] Recursion (touched lightly)
- [x] Arrays
- [ ] Strings (`char` arrays + null terminator) ← next
- [ ] **Pointers** — the big concept; spend serious time here
- [ ] Structs
- [ ] Dynamic memory (malloc, free, heap vs stack)
- [ ] File I/O
- [ ] The preprocessor (#define, headers)
- [ ] Function pointers
- [ ] Bitwise operations
- [ ] Standard library tour


**Programs committed to github.com/trafitol/c-learning:**

Week 1 — Foundations:
1. hello.c
2. variables.c
3. division.c
4. calculator.c
5. fizzbuzz.c
6. sum.c
7. grade.c / grade2.c
8. calculator_functions.c
9. predicate_function.c (is_even)
10. exc_factorial.c (recursion)
11. array_sum.c (first segfault)
12. find_max.c
13. array_reverse.c
14. swap_test.c

Practice folder — daily warmup, rewriting old exercises from scratch.

**Daily discipline:**
- Morning warmup: rewrite 3–4 old exercises from scratch, no peeking
- Then learn new material
- Commit per logical change
- Always `-Wall`; warnings treated as errors


## Patterns I'm Still Building Muscle Memory For

(Update this when warmup reveals a gap.)

- `'M'` (single-quoted char) vs `"M"` (string) — easy to mix up
- The `int` part of `for (int i = 0; ...)` — easy to forget
- Variable declaration syntax: `int a, b;` for multiple, scanf fills them later
- C is sequential, not declarative: arithmetic computes at the line it's written,
  not as a live formula. Order of statements matters.
- Start counting at 1 when the spec says 1–N, not at 0 (FizzBuzz trap)
- `return 0;` at end of main — always, even if implicit
