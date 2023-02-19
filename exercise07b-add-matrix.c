// b. Write a C program, to add two matrices using an Array.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
   int a[2][2], b[2][2];
   int i, j;

   printf("Program to Add 2 Matrices.\n");
   
   printf("Enter Elements of Matrix A: \n");
   for (i=0; i<2; i++)
   {
      for (j=0; j<2; j++)
         scanf("%d", &a[i][j]);
   }
   
   printf("Enter Elements of Matrix B: \n");
   for (i=0; i<2; i++)
   {
      for (j=0; j<2; j++)
         scanf("%d", &b[i][j]);
   }

   printf("\n====Matrix Addition====\n");
   for(i=0; i<2; i++)
   {
      for(j=0; j<2; j++)
         printf("%5d", a[i][j] + b[i][j]);
      printf("\n");
   }
   
}