// Program to find the largest number 

#include <stdio.h>
#include <conio.h>

int main()
{
   int x, y;

   printf("Enter value for x: ");
   scanf("%d", &x);
   printf("Enter value for y: ");
   scanf("%d", &y);

   if (x > y) {
      printf("X is a large number - %d\n", x);
   } else
   {
      printf("Y is a larger  number - %d\n", y);
   }

   return 0;
}