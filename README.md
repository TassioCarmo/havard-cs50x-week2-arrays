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

 - bool, 1 byte
        A Boolean value can technically be represented with just a single bit, but for simplicity our computers use an entire byte.
 - char, 1 byte
 - double, 8 bytes
 - float, 4 bytes
 - int, 4 bytes/32-bit
 -  long, 8 bytes
 - string, ? bytes
        A string takes up a variable amount of space, since it could be short or long.

how bytes and data are allowcated in the RAm/memory

Each square represents a byte
<img src = "https://cs50.harvard.edu/x/2022/notes/2/ram.png">

<img src = "https://cs50.harvard.edu/x/2022/notes/2/scores.png">

<img src = "https://cs50.harvard.edu/x/2022/notes/2/binary.png">

### Arrays

Type of data that allow us to store multiple values of the same type **back to back**

Initializing an array

int scores[3]

- first position score[0] = number
- second postion score[1] = number
- n position score[n] = number

```
  int scores[n];

  for (int i = 0; i < n; i++)
  {
    scores[i] = get_int("Score: ");
  }
```

the purpose of an array is not to save space. It's to eliminate having multiple variable names because that gets very messy quickly.

In C, strings end with a special character, '\0', or a byte with all eight bits set to 0, so our programs have a way of knowing where the string ends. This character is called the null character, or NUL. 

<img src = "https://cs50.harvard.edu/x/2022/notes/2/string.png">

So the computer isn't using 3 bytes for HI! but 4, size of the string plus null that demarcates the end of the string

Supbotmization
<code>for (int i = 0, n = strlen(s); i < n; i++)</code>
 You are calling the function multiple times uncessary, Don't ask multiple times the question you can remember to asnwer to
<code> for (int i = 0, n = strlen(s); i < n; i++)</code>
    
 strings are just arrays, and we know that characters, which are in those arrays, are just binary representations of numbers
    
 inside of Boolean expressions, if you put a value like a function call like this, that returns 0, that's going to be equivalent to false.
    
 ## Command-line arguments

 Programs of our own can also take in command-line arguments, or inputs given to our program in the command we use to run it.
 Main is the way you can specify that your program does, in fact, take command line arguments, that is words after the command in your terminal window
    
 Programming defensivaly in other words finding bugs that the user might do.
    
    Varieable Scope 
    Global everything has acess
    Local only things inside de {}
    
  Arrays are  passed by reference. in other words The callee actually does receive the array so he will be changed regardless of the scope
