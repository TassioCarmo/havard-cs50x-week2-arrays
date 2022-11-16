# Introduction to arrays

## What did i learn?

## Compiling

```
int main(void)
{
    printf("hello, world\n");
}
```
make which is actually just a program that calls clang, a compiler named for the “C language”.

turns our source code into machine code before we could run the compiled program with <code>./</code>

**Compiling** source code into machine code is actually made up of four smaller steps:

- preprocessing - get imports
- compiling -  transform to assambly
- assembling - transform assembly to machine code
- linking - Libraries/imports are combined with the compiled binary of our program

## Debugging

**Bugs**: mistakes in programs that cause them to behave differently than intended. 

**debugging**: the process of finding and fixing those bugs.

Three types of debugging 
- Print: use print to find where the error is
- Debugger: running a debugger (which allows you to go step by step within the program
- Rubber duck: (talk to yourself or someone about the problem)

## Variable Scope

Scopeis a characteristic of a variable that defines from which functions that variable may be accessed.
- Local variablescan only be accessed within the functions in which they are created.
- Global variablescan be accessed by any function in the program.

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

## how bytes and data are allowcated in the RAm/memory ?

Each square represents a byte
<img src = "https://cs50.harvard.edu/x/2022/notes/2/ram.png">

<img src = "https://cs50.harvard.edu/x/2022/notes/2/scores.png">

<img src = "https://cs50.harvard.edu/x/2022/notes/2/binary.png">

### Arrays

Type of data that allow us to store multiple values of the same type **back to back**

Initializing an array

<code>int scores[3]</code>

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

the purpose of an array is not to save space.but to eliminate having multiple variable names, Otherwise it gets very messy quickly.

### In C, strings end with a special character, '\0' called nul, or a byte with all eight bits set to 0, so our programs have a way of knowing where the string ends. This character is called the null character, or NUL. 

<img src = "https://cs50.harvard.edu/x/2022/notes/2/string.png">

So the computer isn't using 3 bytes for HI! but 4, size of the string plus null that demarcates the end of the string

### Supbotmization
- Do not call a function multiple times uncessary
- Don't ask multiple times the question you can remember to asnwer to

<code>for (int i = 0, n = strlen(s); i < n; i++)</code>
    
 ## Command-line arguments

 Programs can also take in command-line arguments, or inputs given to our program in the command-prompt we use to run it.
    
```  
#include <stdio.h>

int main(int argc, string argv[])
{
  ...
}
```
- argc and argv are two variables that our main function will now get automatically when our program is run from the command line. 
- argc is the argument count, or number of arguments (words) typed in. 
- argv[], argument vector (or argument list), is an array of the arguments (words) themselves, and there’s no size specified since we don’t know how big that will be ahead of time.
- The first argument, argv[0], is the name of the program 
    
Making sure that we have the right number of arguments before we try to print something that isn’t there:
```
#include <cs50.h>
#include <stdio.h>
  
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}
```
## Exit status

Main return 0 by default to indicate nothing went wrong, but we can write a program to return a different value like 1 actually any non-zero exit status indicates some error to the system that runs our program 

 
### Others
- strings are just arrays, and we know that characters, which are in those arrays, are just binary representations of numbers
    
- inside of Boolean expressions, if you put a value like a function call like this, that returns 0, that's going to be equivalent to false.
       
- Programming defensivaly in other words finding bugs that the user might do.
    
    Varieable Scope 
    Global everything has acess
    Local only things inside de {}
    
 - Arrays are  passed by reference. in other words The callee actually does receive the array so he will be changed regardless of the scope.
