---

## Skill Scorecard (as of ~4-5 weeks in)

Scale: ⚪ = not touched, 🟡 = shaky, 🟢 = solid but slow, 💚 = reflexive

### Language basics
| Skill | Level | Evidence |
|-------|-------|----------|
| Types, printf/scanf | 💚 | Cold-rewrites in 5-10 min |
| if/else chains | 💚 | FizzBuzz reflexive |
| for/while loops | 💚 | Solid unless nested |
| break, continue | 🟢 | Used in is_sorted, palindrome |
| switch | ⚪ | Seen but never written |
| Recursion | 🟢 | factorial done; also stack_recursion.c |

### Bounds and off-by-one discipline
| Skill | Level | Evidence |
|-------|-------|----------|
| Loop `i < N` vs `i <= N` | 🟡 | Slipped 3+ times, catching own bugs now |
| Empty-body `;` trap | 🟡 | Slipped twice, self-caught by re-reading |
| Match spec's start (0 vs 1) | 🟡 | FizzBuzz slip twice |

### Arrays
| Skill | Level | Evidence |
|-------|-------|----------|
| Declaration & indexing | 🟢 | Sum, max, min, reverse |
| Walking with accumulator | 💚 | sum_array, count_evens, average |
| Track-the-best pattern | 🟢 | find_max, find_min, position_of_max |
| Two-index walk | 🟢 | array_reverse; palindrome; reverse_string |
| Array of structs | 🟢 | 26person done cleanly |

### Strings
| Skill | Level | Evidence |
|-------|-------|----------|
| char[] with '\0' termination | 🟢 | count_vowels, palindrome |
| Walking until '\0' | 🟢 | my_strlen written from scratch |
| String comparisons | ⚪ | strcmp not touched |
| String library functions | 🟡 | strlen used; others not touched |

### Pointers
| Skill | Level | Evidence |
|-------|-------|----------|
| Declaring pointers, &, * | 🟢 | pointer_basics fine |
| Pass by pointer to modify caller | 🟢 | swap works |
| Status code + out-parameter pattern | 🟢 | divide_status, min_max both correct |
| Pointer to struct, -> operator | 🟢 | 25person and 26person clean |
| Pointer arithmetic (`p+i`) | ⚪ | Not yet — always used `p[i]` |
| NULL checks | 🟢 | Habit forming |
| const on pointers | 🟢 | Used correctly in my_strlen |

### Structs
| Skill | Level | Evidence |
|-------|-------|----------|
| Definition and initialization | 🟢 | point, person |
| Passing by value | 🟢 | distance_squared |
| Passing by pointer | 🟢 | print_person, give_raise |
| Array of structs | 🟢 | print_all, total_salary |

### Dynamic memory
| Skill | Level | Evidence |
|-------|-------|----------|
| malloc + NULL check | 🟢 | Seen in stack/heap experiments |
| free discipline | 🟢 | Pattern clear |
| Understanding heap vs stack | 💚 | Confirmed by hands-on experiments |
| Realloc, calloc | ⚪ | Not touched |

### Engineering habits
| Skill | Level | Evidence |
|-------|-------|----------|
| Compile with -Wall | 💚 | Automatic |
| Read compiler errors | 💚 | Debugging own code |
| Verify output vs spec | 💚 | Caught my miscounted vowels |
| Test edge cases (empty, single) | 💚 | 5 test cases in reverse_string |
| Git workflow | 💚 | Automatic |
| Refactoring for DRY | 🟢 | test_reverse helper |
| Reading own past code | 🟢 | Cross-referencing exercises |

### Missing habits (still developing)
- Reflexive `&/*/./->` selection (~60%)
- Reading unfamiliar C code
- Confidence with pointer arithmetic
- Using `switch` where it fits better than `if/else`
