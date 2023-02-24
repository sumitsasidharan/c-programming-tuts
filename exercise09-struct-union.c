// 9. Write a C Program – to use structure within union, display the structure and length of union elements

#include <stdio.h>
#include <conio.h>

union bye
{
   int c;
   float l;
   char *p;
} mydata;

int main()
{
   mydata.c = 5;
   mydata.l = 12.35;
   mydata.p = "aur sab badiya?";

   printf("This is an integer: %d\n", mydata.c);
   printf("This is a Float: %f\n", mydata.l);
   printf("This is a String: %s\n", mydata.p);

   return 0;
}