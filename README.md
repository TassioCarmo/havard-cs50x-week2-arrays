# Introduction to arrays

## What did i learn?

### Compiling

```
int main(void)
{
    printf("hello, world\n");
}
```
make hello first, turning our source code into machine code before we could run the compiled program with ./hello.
make is actually just a program that calls clang, a compiler named for the “C language”.

**Compiling** source code into machine code is actually made up of four smaller steps:

- mpreprocessing - get imports
- compiling -  transform to assambly
- assembling - transform assembly to machine code
- linking - Libraries/imports are combined with the compiled binary of our program

## Debugging

**Bugs** are mistakes in programs that cause them to behave differently than intended. 

**debugging** is the process of finding and fixing those bugs.

Three types of debugging 
- use print to find where the error is
- running a debugger (which allows you to go step by step within the program
- Rubber duck (talk to yourself or someone about the problem)


