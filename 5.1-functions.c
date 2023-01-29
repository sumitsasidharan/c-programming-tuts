#include <stdio.h>

int square(int input)
{
   return input * input;
}

int power(int input, int exponent)
{
   int result = 1;
   for (int i = 1; i <= exponent; i++ ) {
      result *= input;
   }

   return result;
}

// RECURSIVE FUNCTION
int recursivePower(int input, int exponent)
{
   if (exponent < 1) 
   {
      return 1;
   }
   return input * recursivePower(input, exponent - 1);
}

// 
void changeVal(int *input) {
   *input = 9000;
}

int main()
{
   int x = 5;
   int xSquared = square(x);

   printf("%d\n", xSquared);
   printf("%d\n", power(2, 2));

   printf("Recursive Power: %d \n", recursivePower(3, 5));

   changeVal(&x);
   printf("%d\n", x);


   return 0;
}