# Cheatsheet
gcc -Wall (filename).c -o (filename)
= extra checks on probably suspicious code, even stronger than normal, so kernel uses even stricter flags.

## C operators

| Operator | Meaning | Example |
|---|---|---|
| `=` | assignment ("gets") | `x = 5;` |
| `==` | equality test | `if (x == 5)` |
| `!=` | not equal | `if (x != 0)` |
| `+= -= *= /= %=` | shortcut: `x += 3` is `x = x + 3` | `x += 3;` |
| `++ --` | add or subtract 1 | `x++;` |
| `&& || !` | logical AND, OR, NOT | `if (a && b)` |
| `&` | address-of (for scanf) | `scanf("%d", &age);` |
| `%` | modulo (remainder) | `7 % 2 == 1` |

## printf / scanf format specifiers

| Specifier | Type |
|---|---|
| `%d` | int |
| `%ld` | long |
| `%f` | float / double |
| `%.2f` | float, 2 decimal places |
| `%c` | char |
| `%s` | string |
| `%x` | hex int |
| `%p` | pointer address |
| `%%` | literal `%` sign |
| `\n` | newline |
| `\t` | tab |

## Linux terminal commands

| Command | Meaning |
|---|---|
| `ls` | list files |
| `ls -la` | list all files, long format |char
| `cd folder` | change directory |"d
| `cd ..` | go up one level |)
| `cd ~` | go to home directory |+i
| `cd -` | go to previous directory |
| `pwd` | print current path |
| `mkdir name` | create directory |
| `rm file` | delete file |
| `rm -r folder` | delete folder + contents |
| `mv src dest` | move / rename |
| `cp src dest` | y |
| `cat file` | print file contents |
| `nano file` | edit file |
| `man cmd` | manual page for a command |
| `clear` | clear the terminal |

cp file.c backup.c                 # simple copy
cp file.c some_folder/              # copy into a folder, same name
cp file.c some_folder/newname.c     # copy into folder with new name
cp -r folder1 folder2                # copy a whole folder (-r = recursive)


## Compile and run C

```bash
gcc myfile.c -o myprogram   # compile
./myprogram                  # run the compiled binary
gcc -Wall myfile.c -o my     # -Wall = enable all warnings (USE THIS)
```

## Git

| Command | Meaning |
|---|---|
| `git status` | what's changed |
| `git add file` | stage one file |
| `git add -A` | stage everything |
| `git commit -m "msg"` | commit |
| `git push` | upload to GitHub |
| `git log` | history |
| `git diff` | what's changed since last commit |

## Terminal keyboard shortcuts

| Keys | Action |
|---|---|
| `Ctrl + Shift + C` | copy from terminal |
| `Ctrl + Shift + V` | paste into terminal |
| `Tab` | autocomplete filename/command |
| `Up arrow` | recall previous command |
| `Ctrl + C` | cancel the running command |
| `Ctrl + L` | clear screen (same as `clear`) |
| `Ctrl + A` | jump to start of line |
| `Ctrl + E` | jump to end of line |
| `Ctrl + R` | search command history |

## Nano editor shortcuts

| Keys | Action |
|---|---|
| `Ctrl + O` then Enter | save |
| `Ctrl + X` | exit |
| `Ctrl + K` | cut current line |
| `Ctrl + U` | paste |
| `Ctrl + W` | search |
| `Ctrl + \` | search and replace |

## C constructs — slots and what goes where

Think of each construct as a "function" with fixed positions, like an Excel formula.

### Variable declaration
TYPE name = VALUE;
- TYPE: int, char, float, double
- name: any valid identifier (letters, digits, underscore; no spaces)
- VALUE: optional initial value

Examples:
int age = 30;
char letter = 'A';
float price = 9.99f;
int x;            // declared but not initialized — undefined value, danger

---

### printf — write to screen
printf(FORMAT, ARG1, ARG2, ...);
- FORMAT: string with placeholders (%d, %c, %f, %s) and literal text
- ARGS: one per placeholder, in order, matching the type

printf("Hello\n");                       // no placeholders, no args
printf("Age: %d\n", age);                // one %d → one int arg
printf("%s is %d\n", name, age);         // two placeholders, two args

Excel analogy: like CONCATENATE / TEXTJOIN — assemble a string with values plugged in.

---

### scanf — read from keyboard
scanf(FORMAT, &VAR1, &VAR2, ...);
- FORMAT: placeholders for each expected input
- VARS: variables to fill, each prefixed with & (address-of)

scanf("%d", &age);                       // read one int into age
scanf("%d %d", &a, &b);                  // read two ints separated by space/enter

The & is mandatory for scanf. Without it, your program crashes.

---

### if / else if / else
if (CONDITION) {
    BODY
} else if (OTHER_CONDITION) {
    BODY
} else {
    BODY
}

- CONDITION: anything that evaluates to true (non-zero) or false (zero)
- Order matters: first matching branch wins, rest are skipped
- else if and else are optional

Conditions use: ==, !=, <, >, <=, >=, &&, ||, !

---

### for loop — when you know the count
for (INIT; CONDITION; UPDATE) {
    BODY
}

- INIT: runs once at the start (often: int i = 0)
- CONDITION: checked before each iteration; loop continues while true
- UPDATE: runs at the end of each iteration (often: i++)
- BODY: actual work, in braces

for (int i = 1; i <= 100; i++) {
    total += i;
}

Excel analogy: like an array formula or SUMPRODUCT that walks across a range — you specify start, end, and step, and apply something to each element.

---

### while loop — when count is unknown
while (CONDITION) {
    BODY
}

- CONDITION: checked before each iteration
- BODY must include something that eventually makes CONDITION false, or it loops forever

while (n > 0) {
    n--;
}

---

### switch — many discrete cases
switch (VARIABLE) {
    case VALUE1:
        BODY
        break;
    case VALUE2:
        BODY
        break;
    default:
        BODY
        break;
}

- VARIABLE: an integer-like type (int, char)
- Each case must end with break or execution "falls through" to the next
- default runs only if no case matched

---

### break and continue (used inside loops)
break;       // exit the loop immediately
continue;    // skip rest of this iteration, go to next

---

## Format specifiers (used by printf and scanf)

| Specifier | Type            | Example printf            |
|-----------|-----------------|---------------------------|
| %d        | int             | printf("%d", 42)          |
| %ld       | long            | printf("%ld", 100000L)    |
| %u        | unsigned int    | printf("%u", 5u)          |
| %f        | float / double  | printf("%f", 3.14)        |
| %.2f      | float, 2 decimals | printf("%.2f", 3.14)   |
| %c        | char            | printf("%c", 'A')         |
| %s        | string          | printf("%s", "hello")     |
| %x        | int as hex      | printf("%x", 255)         |
| %p        | pointer address | printf("%p", &x)          |
| %%        | literal % sign  | printf("100%%")           |

Escape characters inside strings:
\n   newline
\t   tab
\\   literal backslash
\"   literal double quote
\0   null character (string terminator)

---("%c",'A')

## Compilation workflow

gcc -Wall myfile.c -o myprogram
./myprogram

- -Wall: enable all sensible warnings (always use it)
- -o NAME: name the output binary (without -o, defaults to a.out)

Common quick fixes:
- "Permission denied" running ./file.c → you tried to run source, not binary
- "expected ';'" → missing semicolon, often on the line ABOVE
- "expected ')' before X" → missing closing quote or paren
- "stray '\' in program" → wrote /n instead of \n somewhere










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








## The &, *, ., -> decision table

When you have variable `x` (a value, not a pointer):
- `x`         → the value itself
- `&x`        → address of x (a pointer)

When you have variable `p` (a pointer):
- `p`         → the address it holds
- `*p`        → the value at that address (what it points to)

For struct fields:
- If `x` is a struct value:      `x.field`      (dot)
- If `p` is a pointer to struct: `p->field`     (arrow)

Rules to memorize:
1. `&` and `*` are inverses. `*&x` == `x`. Reading:
   - `&` = "address of"
   - `*` = "the value at"

2. `.` and `->` do the same thing (access a field), but differ by
   what's on the left:
   - `.` when the left is a struct value
   - `->` when the left is a pointer to a struct

3. `p->field` is EXACTLY equivalent to `(*p).field` — the arrow is
   syntactic sugar for "dereference then access."

## Function parameter mirror rule

The `*` in a function signature tells you what the caller must pass:

| Function signature       | Caller passes         |
|--------------------------|-----------------------|
| `f(int x)`               | `f(age)` — just x     |
| `f(int *p)`              | `f(&age)` — & of x    |
| `f(struct S x)`          | `f(a)` — the struct   |
| `f(struct S *p)`         | `f(&a)` — & of struct |
| `f(int arr[])` (array)   | `f(arr)` — no &       |
| `f(char *s)` (string)    | `f(text)` — no &      |

Rule: `*` in signature ↔ `&` in caller.
Exception: arrays and strings decay to pointers automatically, no & needed.

## Inside a function that received a pointer

If the parameter is `int *p`:
- `p`        → the address
- `*p`       → read the value
- `*p = 100` → write to the value (modifies caller's variable)

If the parameter is `struct S *p`:
- `p`        → the address
- `p->field` → read the field
- `p->field = X` → write the field (modifies caller's struct)

You'll almost never write `(*p).field`. Always `p->field`. Arrow means dereference-and-access.


##handy extras
- line numbers
Adding linenumbers in terminal
nano ~./nanorc
"set linenumbers"
To see linnumbers at cat (-n):
e.g.: cat -n 26person.c

- To see tree or categorization:
cd ~/c-learning
tree

- And to push everything to git:
cd ~/c-learning
git status                       # see what's changed
git add -A                       # stage every change, everywhere
git status                       # confirm the list of green files
git commit -m "descriptive message"
git push

