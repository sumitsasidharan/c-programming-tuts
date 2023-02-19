// Write a C Program – using pointers To Swap the Values of Two Variables.

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