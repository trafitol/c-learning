2###260704 Exercise Log

A record of every exercise done, in order, with the technique or pattern it taught.

### Week 1 — Foundations
| # | File | Focus |
|---|------|-------|
| 1 | `hello.c` | First compiled C program; `printf`, `#include`, `main` |
| 2 | `variables.c` | Types (`int`, `char`, `float`, `double`); format specifiers |
| 3 | `division.c` | Integer division gotcha; `(float)` cast; modulo; `%%` for literal `%` |
| 4 | `calculator.c` | `scanf`; address-of `&`; divide-by-zero guard |
| 5 | `fizzbuzz.c` | `for` loop; `if/else if` chain; order matters (most-specific first) |
| 6 | `sum.c` | Accumulator pattern |
| 7 | `grade.c` / `grade2.c` | Input validation; refactor to validate-first pattern |

### Week 1 — Functions
| # | File | Focus |
|---|------|-------|
| 8 | `calculator_functions.c` | First custom functions; return values |
| 9 | `predicate_function.c` | Predicate returning 0/1; used inside `if` |
| 10 | `exc_factorial.c` | Recursion; integer overflow defense with `long long`, `%lld` |

### Week 1 — Arrays
| # | File | Focus |
|---|------|-------|
| 11 | `array_sum.c` | Array walking; **first segfault** from off-by-one |
| 12 | `find_max.c` | Track-the-best pattern; init with `arr[0]`, not 0 |
| 13 | `array_reverse.c` | Two-index walk; three-line swap with `tmp`; loop `size/2` |
| 14 | `swap_test.c` | Isolated the swap idiom with two plain ints |

### Week 2 — Array drills
| # | File | Focus |
|---|------|-------|
| 15 | `sum_array.c` | Accumulator over hardcoded array |
| 16 | `average_array.c` | Sum then divide; `(float)` cast for accurate mean |
| 17 | `count_evens.c` | Modulo + accumulator for counting matches |
| 18 | `find_min.c` | Same shape as find_max, flipped comparison |
| 19 | `position_of_max.c` | Track an **index**, not just a value; multi-variable accumulator |
| 20 | `is_sorted.c` | Flag pattern; adjacent-pair comparison; early `break` |

### Week 2 — Strings
| # | File | Focus |
|---|------|-------|
| 21 | `count_vowels.c` | Walk string until `'\0'`; chained `||` comparisons |
| 22 | `palindrome.c` | Two-index walk from both ends, comparing; flag pattern |

### Week 2 — Pointers
| # | File | Focus |
|---|------|-------|
| 23 | `pointer_basics.c` | `&` (address-of), `*` (dereference), `%p` specifier |
| 24 | `pointer_swap.c` | Swap as function; pass-by-value and why pointers exist |
| 25 | `divide_status.c` | **Kernel pattern**: status-code return + out-parameter pointer |
| 26 | `min_max.c` | Two out-parameters; multiple results via pointers |

### Week 2 — Strings continued
| # | File | Focus |
|---|------|-------|
| 27 | `string_length.c` | Wrote own `strlen`; `const char *` parameter |
| 28 | `reverse_string.c` | Reverse string in place; helper function refactor (DRY) |

### Week 2 — Structs
| # | File | Focus |
|---|------|-------|
| 29 | `24point.c` | First struct; `.field` access; struct passed by value |
| 30 | `25person.c` | Struct by pointer; **arrow operator `->`**; `const struct *` |
| 31 | `26person.c` | Array of structs; combining `team[i]` and `.field` |

### Week 2 — Dynamic memory
| # | File | Focus |
|---|------|-------|
| 32 | `27dynamic.c` | `malloc` / `free`; heap vs stack; NULL check |
| 33 | `28dynamic_people.c` | Dynamic array of structs; combines pointers + structs + malloc |

---

## Big Patterns Now Internalized

- **Accumulator** — sum, product, count. Initialize before, update inside, print after.
- **Track-the-best** — max, min, best position. Initialize with `arr[0]`, walk from index 1.
- **Two-index walk** — swap, reverse, palindrome. `left` from start, `right` from end, walk inward.
- **Predicate** — return 0/1 for yes/no, usable inside `if`.
- **Status code + out-parameter** — kernel error handling. Return code, result via pointer.
- **Validate-first** — defensive input handling. Check bad cases before main logic.
- **Flag + early break** — search with early exit when answer is known.

## Language Features Fluent

- Types, control flow, functions, recursion
- Arrays: indexing, walking, bounds discipline (`i < N`, never `i <= N`)
- Strings: `char` arrays with `'\0'` terminator
- Structs: definition, initialization, `.` and `->` access
- Pointers: basic use, function parameters, arrows for struct fields
- Dynamic allocation: `malloc`, `free`, NULL check

## Habits Built

- Always compile with `-Wall`; treat warnings as errors
- Read compiler errors calmly and fix root cause, not symptom
- Verify output line-by-line against expected values
- Commit per logical change with descriptive messages
- Redo old exercises for muscle memory
- Test edge cases: empty, single element, negative, zero
- Not googling solutions — struggle with compiler as teacher

## Still Developing

- Reflexive `&` / `*` / `.` / `->` selection (~60% there)
- Confidence with pointer arithmetic
- Debugging without prompt-hopping between files
- Reading unfamiliar C code

## Not Yet Touched (Coming)

- File I/O (`fopen`, `fread`, `fwrite`, `fgets`)
- Function pointers (kernel's polymorphism mechanism)
- Bitwise operations (kernel uses constantly)
- Preprocessor macros (`#define`, header files, `#ifdef`)
- Linked lists (structs pointing to structs)
- `goto` for error cleanup (kernel idiom)

---

## Progress Estimate

**~33 exercises in ~4–5 weeks of calendar time.**
Roughly 40% through Phase 1 (C language proper).
Pointer wall behind me — remaining concepts should install faster.

Revised timelines (based on observed pace):
- Small useful CLI tools I could build: **6–8 weeks out**
- First accepted kernel patch: **4–8 months out**
- Low-latency systems engineer at Amsterdam trading firm: **12–18 months out**
- Deep kernel subsystem work: **2–3 years out**








1###260625 Phase 1: C language proper (weeks 1–8) — IN PROGRESS
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
