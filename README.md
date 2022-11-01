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

## Memory
In C, we have different types of variables we can use for storing data. Each variable is stored with a fixed number of bytes, and for most computer systems each type has the following size:

    bool, 1 byte
        A Boolean value can technically be represented with just a single bit, but for simplicity our computers use an entire byte.
    char, 1 byte
        Recall that with ASCII, we have a maximum of 256 different possible characters, since there are 8 bits in a byte.
    double, 8 bytes
        Twice as many bytes as a float.
    float, 4 bytes
    int, 4 bytes
        Recall that a 32-bit integer can represent about 4 billion different values.
    long, 8 bytes
        Twice as many bytes as an int.
    string, ? bytes
        A string takes up a variable amount of space, since it could be short or long.

how bytes and data are allowcated in the RAm/memory

Each square represents a byte
<img src = "https://cs50.harvard.edu/x/2022/notes/2/ram.png">
<img src = "https://cs50.harvard.edu/x/2022/notes/2/scores.png">
<img src = "https://cs50.harvard.edu/x/2022/notes/2/binary.png">

### Arrays

Type of data that allow us to store multiple values of the same type **back to back**

