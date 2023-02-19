// b. Write a C program, to multiply two matrices using an Array.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
   int a[2][2], b[2][2], c[10][10];
   int i, j, k;

   printf("Program to multiply 2 Matrices.\n");
   
   printf("Enter elements of Matrix A: \n");
   for (i=0; i<2; i++)
   {
      for(j=0; j<2; j++)
         scanf("%d", &a[i][j]);
   }

   printf("Enter elements of Matrix B: \n");
   for (i=0; i<2; i++)
   {
      for(j=0; j<2; j++)
         scanf("%d", &b[i][j]);
   }

   printf("\n====Matrix Multiplication====\n");
   for(i=0; i<2; i++)
   {
      for(j=0; j<2; j++)
      {
         c[i][j] = 0;
         for (k=0; k<2; k++)
            c[i][j] = c[i][j] + a[i][k] * b[k][j];
      }
   }

   // Print the Matrix
   for (i=0; i<2; i++)
   {
      for (j=0; j<2; j++)
         printf("%5d", c[i][j]);

      printf("\n");
   }
   
   
}