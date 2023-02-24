// 7a. Write a C program, to find both the largest and smallest number in a list of integers using an Array.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
   int i, j, n, min, max, matrix[20];

   printf("\n Enter the no. of array elements: ");
   scanf("%d", &n);

   printf("Enter the array elements: ");
   for (i=0; i<n; i++)
   {
      scanf("%d", &matrix[i]);
   }

   max = matrix[0];
   min = matrix[0];

   for (i=0; i<n; i++)
   {
      if (matrix[i] > max)
         max = matrix[i];
      
      if (matrix[i] < min)
         min = matrix[i];
   }

   printf("The maximum number in the given array is: %d\n", max);
   printf("The minimum number in the given array is: %d\n", min);
   
}