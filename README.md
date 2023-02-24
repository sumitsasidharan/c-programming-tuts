## How to Compile C programs using GCC compiler

- `gcc filename.c`
- `./a.exe`

### 1. Write a C program to find the sum of individual digits of a positive integer.

```c
#include <stdio.h>
#include <conio.h>

int main()
{
   int num, k = 1, sum = 0;
   // clrscr();

   printf("Enter the number whose digits are to be added: ");
   scanf("%d", &num);

   while(num != 0)
   {
      k = num % 10;  // for getting the last digit
      sum = sum + k;  // keep adding the last digit to sum
      k = num / 10;  // get the remaining number, eg 153 / 10 = 15, k becomes 0 when num is single digit
      num = k; // k is assigned to num
   }

   printf("\nSum of the digits: %d \n", sum);

   return 0;
}
```

### 10. Write a C Program – using pointers To Swap the Values of Two Variables.

```c
#include <stdio.h>
#include <conio.h>

int main()
{
   int x, y, *a, *b, temp;

   printf("Enter the values of x and y\n");
   scanf("%d%d", &x, &y);
   
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
   a = &x;
   b = &y;

   temp = *b;
   *b = *a;
   *a = temp;
   
   printf("\nAfter Swapping\nx = %d\ny = %d\n", x, y);
   
   return 0;
}
```

### Header files in C.

In C language, header files contain the set of predefined standard library functions. You request to use a header file in your program by including it with the C preprocessing directive “#include”. All the header file have a ‘.h’ an extension. By including a header file, we can use its contents in our program. In C, all the header files must necessarily end with the “.h” extension. 

A header file contains: 

- Function definitions
- Data type definitions
- Macros

It offers the above features by importing them into the program with the help of a preprocessor directive “#include”. These preprocessor directives are used for instructing compiler that these files need to be processed before compilation. In C program should necessarily contain the header file which stands for standard input and output used to take input with the help of scanf() and printf() function respectively. 
In C++ program has the header file which stands for input and output stream used to take input with the help of “cin” and “cout” respectively. 
There are of 2 types of header file: 
 

- Pre-existing header files: Files which are already available in C/C++ compiler we just need to import them.
- User-defined header files: These files are defined by the user and can be imported using “#include”.
Syntax: 
 

#include <filename.h>
or
#include "filename.h"

The “#include” preprocessor is responsible for directing the compiler that the header file needs to be processed before compilation and includes all the necessary data type and function definitions.

### Modulus Operator 

Link: https://byjus.com/gate/modulus-operator-in-c/

The modulus operator % gives you the remainder when two integers are divided: 1 % 2 is 1; 7 % 4 is 3. (The modulus operator can only be applied to integers.)

 The modulus operator is added in the arithmetic operators in C, and it works between two available operands. It divides the given numerator by the denominator to find a result. In simpler words, it produces a remainder for the integer division. Thus, the remainder is also always an integer number only. If there is no remainder obtained, then we get the remainder as zero (0).


 ### Built in Functions

The C language is accompanied by a number of library functions or built in functions that carry out various commonly used operations or calculations. There are library functions that carry out standard input/output operations, functions that perform operations on characters, functions that perform operations on strings and functions that carry out various mathematical calculations.

Functionally similar library functions are usually grouped together as object programs in separate library files. A library function is accessed simply by writing the function name, followed by a list of arguments that represent information being passed to the function. A function that returns a data item can appear anywhere within an expression in place of a constant or an identifier. A function that carries out operations on data items but does

abs(i) - Return the absolute value of ( i is integer)

ceil(d) - Round up to the next integer value(the smallest integer that is greater than or equal to d)

cos(d) - Return the cosine of d

exp(d) - Raise e to the power d(e=Naperian constant)

fabs(d) - Return the absolute value of d(d is double)

floor(d) - Round down to the next integer value(the largest integer that does not exceed d)

getchar() - Enter a character from the standard input device

log(d) - Return the natural logarithm of d

pow(d1,d2) - Return d1 raised to the power d2

putchar(c) - Send a character to the standard output device

rand() - Return a random positive integer

sin(d) - Return sine of d

sqrt(d) - Return the square root of d

tan(d) - Return the tangent of d

toascii(c) - Convert value of argument to ASCII

tolower(c) - Convert letter to lowercase

toupper(c) - Convert letter to uppercase


### File Handling in C

Link: https://byjus.com/gate/file-handling-in-c/

What is File Handling in C?
File handling refers to the method of storing data in the C program in the form of an output or input that might have been generated while running a C program in a data file, i.e., a binary file or a text file for future analysis and reference in that very program.

#### What is a File in C?

A file refers to a source in which a program stores the information/data in the form of bytes of sequence on a disk (permanently). The content available on a file isn’t volatile like the compiler memory in C. But the program can perform various operations, such as creating, opening, reading a file, or even manipulating the data present inside the file. This process is known as file handling in C.

#### Why Do We Need File Handling in C?

There are times when the output generated out of a program after its compilation and running do not serve our intended purpose. In such cases, we might want to check the program’s output various times. Now, compiling and running the very same program multiple times becomes a tedious task for any programmer. It is exactly where file handling becomes useful.

Let us look at a few reasons why file handling makes programming easier for all:

**Reusability**: File handling allows us to preserve the information/data generated after we run the program.

**Saves Time**: Some programs might require a large amount of input from their users. In such cases, file handling allows you to easily access a part of a code using individual commands.

**Commendable storage capacity**: When storing data in files, you can leave behind the worry of storing all the info in bulk in any program.

**Portability**: The contents available in any file can be transferred to another one without any data loss in the computer system. This saves a lot of effort and minimises the risk of flawed coding.

| Description of Function | Function in Use |
| ----------- | ----------- |
| used to open an existing file or a new file | fopen() |
| writing data into an available file | fprintf() |
| reading the data available in a file | fscanf() |
| writing any character into the program file | fputc() |
| reading the character from an available file | fgetc() |
| used to close the program file | fclose() |
| used to set the file pointer to the intended file position | fseek() |
| writing an integer into an available file | fputw() |
| used to read an integer from the given file | fgetw() |
| used for reading the current position of a file | ftell() |
| sets an intended file pointer to the file’s beginning itself | rewind() |


### Difference Between Structure and Array in C

Both the Structure and Array in C serve as containers for data types. It means that a user can easily store data in both Array and Structure. Then they can also perform various operations on them. In this article, we will discuss the difference between Structure and Array in C. But let us first know a bit more about them both.

One major difference between both of them is that- in an Array, the elements are of the same data type while a structure has elements of different data types. You can also define an Array’s size during the declaration and write it in numbers within a square bracket preceded by the name of the array.

**Structure in C** – It is a user-defined type of data in C and C++ languages. It creates a collection of data types. One can use a structure for grouping items of possibly varied types into a single one.

**Array in C** – It is a collection of varied items that get stored at contiguous memory locations.

A few more differences between both of them are in the comparison chart below:

| Parameter | Structure in C | Array in C |
| ----------- | ----------- | ----------- |
| Definition | It is a type of data structure in the form of a container that holds variables of different types. | It is a type of data structure that works as a container to hold variables of the very same type. Array does not support variables of multiple data types. |
| Allocation of Memory | In a structure, the memory allocation for the input data doesn’t require being in consecutive memory locations. | The array stores the input data in a memory allocation of contiguous type. It means that the array stores its data in a type of memory model where the memory blocks hold consecutive addresses (it assigns memory blocks consecutively). |
| Accessibility | For a user to access the elements present in a structure, they require the name of that particular element (it is mandatory for retrieval). | On the other hand, any user can easily access the elements by index in an array’s case. |
| Pointer | A structure holds no concept of internal Pointer. | An array, on the other hand, implements Pointer internally. It always points at the very first element present in the array. |
| Instantiation | One can create an object from the structure after a later declaration in its program. | An array does not allow the creation of an object after the declaration. |
| Types of Data Type Variables | A structure includes multiple forms of data-type variables in the form of input. | A user cannot have multiple forms of data-type variables in an array because it supports only the same form of data-type variables. |
| Performance | A structure becomes very slow in performance due to the presence of multiple data-types. The process of searching and accessing elements becomes very slow in these. | The process of searching and accessing elements is much faster in the case of an array due to the absence of multiple data-type variables. It is, thus, better and faster in performance. |
| Syntax | struct sructure_name{ element type 1; element type 2; } variable no.1, variable no.2, . .; | `type name_of_array [size]` |
| Bit Field | You can define a Bit field in a structure. | You cannot define a Bit field in an array. |
| Access | You can access the Structure elements by their names. | You can access the Array elements by their index numbers. |
| Operators | The element accessing operator for a structure is a dot operator “.“ | The element accessing operator and declaration for an array is a square bracket [ ] |
| Size | The various elements in a structure are of different sizes each. | The array contains various elements of the same size. |
| Keyword | We use the keyword “struct” to define a structure. | No keyword is present to declare an array. |
| User-defined | The structure is a user-defined form of data type. | An array isn’t user-defined. It is declared directly. |