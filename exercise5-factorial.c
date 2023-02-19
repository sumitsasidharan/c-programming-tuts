// Program to find a factorial of a given number

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

long int factorial(int num);
long int factorialRecursive(int num);

int main()
{
   int n, i, f, choice;

   printf("Program to find factorial\n");
   printf("1 - Using Recursive Function\n");
   printf("2 - Non Recursive Function\n");
   printf("\nEnter Choice: ");
   scanf("%d", &choice);

   printf("\nEnter the number: ");
   scanf("%d", &n);
   
   switch(choice) {
      case 1:
         // f = factorialRecursive(n);
         printf("Factorial of %d = %d", n, factorialRecursive(n));
         break;

      case 2:
         // f = factorial(n);
         printf("Factorial of %d = %d", n, factorial(n));
         break;

      default:
         printf("Incorrect choice. Enter 1 or 2.");
         exit(0);
   }

   // printf("Factorial of %d = %d", n, f);

   return 0;
}

long int factorialRecursive(int num)
{
   if (num == 0) {
      return 1;
   }
   
   return num * factorial(num - 1);
}

long int factorial(int num)
{
   int i, fact = 1; 

   for (i = 1; i <= num; i++)
   {
      fact = fact * i;
   }

   return fact;
}