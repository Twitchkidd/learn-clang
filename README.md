# Learning C!

Good morning!

## Compiling C:

### gcc

Running `gcc heyWorld.c` produces an executable './a.out', and the `-o <file>` flag can specify an output file. I've only glanced at the options for gcc and the next option, make, I'd bet gcc is the precision tool.

### make

Running `make heyWorld` produces an executable './heyWorld', given that ./heyWorld.c compiles. Nice.

### New Alias: rrc!

Running `rrc test` will now rm test, make test, and execute ./test!

```
rerunc() {
    if [ -z $1 ]
    then
        return
    else
        rm $1
        make $1
        ./$1
    fi
}
alias rrc="rerunc"
```

## Terminal Lessons

### EOF Processing

> How do I type EOF to the terminal in a C program?

Turns out there are two types of input into a terminal: canonical, like the Bourne shell, holds the line in memory (input buffer) until enter is pressed, then it reads it (allowing for editing/backspacing all the way until enter is pressed), whereas non-canonical input, like in vi, is available to the program as it's typed. There's also canonical and non-canonical output, with minor differences mainly to accomodate low power machines.

EOF processing (control + D) is handled like canonical input in the terminal, **which is why you have to press it twice.** The _first_ time you press it, it passes the line to read(), and if it was at the beginning of the line, this would return zero bytes, but if it returns bytes, the terminal displays `^D` and waits for you to either press it again, or it hangs out and can either be overwritten, or if you go to the next line it chills, and doesn't add to the characters in the 'file'. The _second_ time you press it, read() has already gotten to the end of the line, returns zero bytes, and EOF is input.

Bada-bing.
