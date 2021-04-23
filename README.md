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
