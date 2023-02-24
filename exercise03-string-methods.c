// 3. Write a C program - using gets() and puts() do display the input character

#include <stdio.h>
#include <conio.h>

void main()
{
   char ch[100];

   printf("Enter your name: \n");
   gets(ch);
   puts(ch);
}