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

---

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
