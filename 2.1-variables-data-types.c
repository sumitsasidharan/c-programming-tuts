#include <stdio.h>
#include <stdbool.h>

int main()
{
   int a = 10;
   double b = 10.5;
   printf("%lu\n", sizeof(b)); // 8 bytes = 64 bits

   float c = 10.5;
   printf("%lu\n", sizeof(c)); // 4 bytes = 32 bits

   char d = 'a';
   char e[] = "char array"; // a string
   bool f = false;

   // implicity type conversion
   int zero = .99999;
   printf("zero is %d\n", zero);

   int slices = 17;
   int people = 2;

   // explicit typecasting
   double slicesPerPerson = (double) slices / people;
   printf("%lf\n", slicesPerPerson);

   // return 0;
}