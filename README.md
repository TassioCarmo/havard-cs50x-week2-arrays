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



