---

# C Language Reference

## Part 1: Keywords / Statements (built into the language, no #include needed)

### Control flow

| Keyword | Use | Frequency |
|---------|-----|-----------|
| `if` / `else` / `else if` | Conditional branching | Constant |
| `for` | Counted loop | Constant |
| `while` | Conditional loop | Common |
| `do { ... } while (cond);` | Loop that runs at least once | Occasional |
| `switch` / `case` / `default` | Multi-way branch on int-like value | Common in kernel code |
| `break` | Exit nearest loop or switch | Constant |
| `continue` | Skip rest of iteration | Common |
| `return` | Exit function with a value | Constant |
| `goto` | Jump to label | Rare in user code; **standard in kernel error-handling** |

### Type-related

| Keyword | Use | Frequency |
|---------|-----|-----------|
| `int` | 32-bit signed integer | Constant |
| `char` | 1-byte character/integer | Constant |
| `float` | 32-bit decimal | Occasional (almost never in kernel) |
| `double` | 64-bit decimal | Occasional |
| `void` | "no value" / "no type" | Constant |
| `short` | 16-bit integer | Occasional |
| `long` | 64-bit integer (on Linux) | Common |
| `long long` | 64-bit guaranteed | Common when long isn't enough |
| `unsigned` | non-negative variant | Common, especially in kernel |
| `signed` | explicit signed variant | Rare (default for int) |
| `_Bool` / `bool` (with stdbool.h) | true/false | Common |
| `struct` | Group related fields | Constant |
| `union` | Multiple types sharing storage | Occasional (kernel uses heavily) |
| `enum` | Named integer constants | Common |
| `typedef` | Alias for an existing type | Common |
| `const` | Variable can't be modified after init | Common |
| `static` | File-local or persistent storage | Common in kernel |
| `extern` | Declared elsewhere | Common in multi-file projects |
| `volatile` | Don't optimize reads/writes | Important in kernel, hardware code |
| `sizeof` | Size in bytes (compile-time) | Constant |

### Notes

- `goto` has a bad reputation in user code (1968 Dijkstra paper). In **kernel code it's
  the standard error-cleanup idiom** — see almost any kernel function.
- `do-while` runs the body once *before* checking. Good for "read input, then validate":
```c
  do {
      printf("Enter 0–100: ");
      scanf("%d", &n);
  } while (n < 0 || n > 100);
```

---

## Part 2: Standard Library Functions (require #include)

### `<stdio.h>` — Input/Output (used in every program)

| Function | Use |
|----------|-----|
| `printf(fmt, ...)` | Print to screen |
| `scanf(fmt, ...)` | Read from keyboard |
| `puts(str)` | Print a string + newline (faster than printf for simple strings) |
| `putchar(c)` | Print one character |
| `getchar()` | Read one character |
| `fgets(buf, n, stdin)` | Safer string input (limits how much it reads) |
| `fopen(path, mode)` | Open a file |
| `fclose(fp)` | Close a file |
| `fread(buf, sz, n, fp)` | Read raw bytes from a file |
| `fwrite(buf, sz, n, fp)` | Write raw bytes |
| `fprintf(fp, fmt, ...)` | Print to a file |
| `fscanf(fp, fmt, ...)` | Read from a file |
| `fprintf(stderr, fmt, ...)` | Print to standard error (for error messages) |

### `<stdlib.h>` — General utilities

| Function | Use |
|----------|-----|
| `malloc(size)` | Allocate memory on the heap |
| `calloc(n, size)` | Allocate and zero-fill memory |
| `realloc(ptr, size)` | Resize an allocation |
| `free(ptr)` | Release allocated memory |
| `exit(status)` | Terminate the program immediately |
| `atoi(str)` | Convert string to int |
| `atof(str)` | Convert string to float |
| `strtol(str, end, base)` | Robust string-to-long with error detection |
| `rand()` / `srand(seed)` | Pseudo-random number generator |
| `abs(n)` | Absolute value (int) |
| `qsort(arr, n, size, cmp)` | Sort an array (uses a callback function pointer) |
| `bsearch(...)` | Binary search a sorted array |

### `<string.h>` — String handling

| Function | Use | Notes |
|----------|-----|-------|
| `strlen(s)` | Length excluding `'\0'` | Walks the whole string |
| `strcpy(dest, src)` | Copy string | **Buffer-overflow risk** |
| `strncpy(dest, src, n)` | Copy at most n chars | Safer, but still tricky |
| `strcmp(a, b)` | Compare strings | Returns 0 if equal |
| `strncmp(a, b, n)` | Compare first n chars | |
| `strcat(dest, src)` | Concatenate (append) | Buffer overflow risk |
| `strchr(s, c)` | Find first occurrence of char | Returns NULL if not found |
| `strstr(haystack, needle)` | Find substring | Returns NULL if not found |
| `memcpy(dest, src, n)` | Copy raw bytes | Like strcpy but for any data |
| `memset(buf, c, n)` | Fill memory with a byte value | Common: `memset(buf, 0, n)` to zero buffers |
| `memcmp(a, b, n)` | Compare raw bytes | |

### `<ctype.h>` — Character classification (cheap, very useful)

| Function | Returns true if... |
|----------|-------------------|
| `isdigit(c)` | c is '0'–'9' |
| `isalpha(c)` | c is a letter |
| `isalnum(c)` | c is letter or digit |
| `isspace(c)` | c is whitespace (space, tab, newline) |
| `isupper(c)` / `islower(c)` | c is upper/lower case letter |
| `ispunct(c)` | c is punctuation |
| `toupper(c)` / `tolower(c)` | Convert case (returns the converted char) |

These would have simplified your vowel counter:
```c
if (tolower(text[i]) == 'a' || ...) { ... }
```
Now uppercase and lowercase vowels both count.

### `<math.h>` — Math (link with -lm flag: gcc file.c -o prog -lm)

| Function | Use |
|----------|-----|
| `sqrt(x)` | Square root |
| `pow(x, y)` | x to the power y |
| `fabs(x)` | Absolute value (float) |
| `floor(x)` / `ceil(x)` | Round down / up |
| `sin(x)` / `cos(x)` / `tan(x)` | Trigonometry (radians) |
| `log(x)` / `exp(x)` | Natural log / e^x |

Rarely used in kernel code — kernel avoids floating point.

### `<stdbool.h>` — Boolean type

Defines: `bool`, `true`, `false`. With this included:
```c
bool finished = false;
if (finished) { ... }
```
Without it, you use plain `int` (`0` = false, anything else = true).

### `<time.h>` — Time and dates

| Function | Use |
|----------|-----|
| `time(NULL)` | Current Unix timestamp |
| `clock()` | Processor time used by program |
| `ctime(&t)` | Convert timestamp to human-readable string |

### `<assert.h>` — Debug assertions

```c
assert(x > 0);   // crashes program if x <= 0; removed in release builds with -DNDEBUG
```

Useful for internal sanity checks during development.

### `<errno.h>` — Error codes

`errno` is a global variable set by many standard functions when they fail.
```c
FILE *fp = fopen("missing.txt", "r");
if (fp == NULL) {
    printf("Error: %d\n", errno);  // e.g., 2 = ENOENT (no such file)
}
```

### `<limits.h>` — Constants

`INT_MAX`, `INT_MIN`, `LONG_MAX`, `CHAR_BIT` (always 8), etc.

---

## What I'll actually use most often (year 1)

In rough order of frequency:

1. `printf` / `scanf` (`<stdio.h>`)
2. `if` / `for` / `while` / `return` (keywords)
3. `int` / `char` / `void` / `struct` (types)
4. `strlen` / `strcmp` / `memcpy` / `memset` (`<string.h>`)
5. `malloc` / `free` (`<stdlib.h>`) — coming soon
6. `fopen` / `fread` / `fclose` (`<stdio.h>`)
7. `static` / `const` (keywords)
8. `switch` / `break` / `continue` (keywords)
9. `sizeof` (keyword)
10. `assert` (`<assert.h>`)

## What I'll see in kernel code but not in user code (year 2+)

- `volatile` (memory-mapped I/O, hardware registers)
- `goto` (error cleanup, see `Documentation/process/coding-style.rst`)
- Kernel-specific macros: `EXPORT_SYMBOL`, `container_of`, `list_for_each_entry`
- Kernel allocators: `kmalloc`, `kfree`, `vmalloc`, `kmem_cache_alloc`
- Kernel logging: `printk` (not printf!)

The kernel has its **own standard library** because it can't use libc — libc needs an OS, and the kernel *is* the OS. Almost every libc function has a kernel equivalent with a slightly different name.
