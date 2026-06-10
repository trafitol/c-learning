# Cheatsheet

## C operators

| Operator | Meaning | Example |
|---|---|---|
| `=` | assignment ("gets") | `x = 5;` |
| `==` | equality test | `if (x == 5)` |
| `!=` | not equal | `if (x != 0)` |
| `+= -= *= /= %=` | shortcut: `x += 3` is `x = x + 3` | `x += 3;` |
| `++ --` | add or subtract 1 | `x++;` |
| `&& \|\| !` | logical AND, OR, NOT | `if (a && b)` |
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
| `ls -la` | list all files, long format |
| `cd folder` | change directory |
| `cd ..` | go up one level |
| `cd ~` | go to home directory |
| `cd -` | go to previous directory |
| `pwd` | print current path |
| `mkdir name` | create directory |
| `rm file` | delete file |
| `rm -r folder` | delete folder + contents |
| `mv src dest` | move / rename |
| `cp src dest` | copy |
| `cat file` | print file contents |
| `nano file` | edit file |
| `man cmd` | manual page for a command |
| `clear` | clear the terminal |

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
