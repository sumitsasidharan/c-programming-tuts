#include <stdio.h>

void square(int *input)
{
   *input *= *input;
}

void sizeExample(int ages[])
{
   printf("memory size of ages = %lu\n", sizeof(ages));
}

int main()
{
   int a = 100;
   int *b = &a;

   printf("a = %d\n", a);
   printf("*b = %d\n", *b);

   a = 200;

   printf("a = %d\n", a);
   printf("*b = %d\n", *b);

   *b = 300;

   printf("a = %d\n", a);
   printf("*b = %d\n", *b);

   int c = 6000;
   b = &c;

   a = 4000;

   printf("a = %d\n", a);
   printf("*b = %d\n", *b);

   int x = 5;
   square(&x);
   printf("%d\n", x);

   int size = 6;
   int ages[] = { 28, 17, 14, 23, 45, 67};

   printf("memory size of ages = %lu\n", sizeof(ages));

   sizeExample(ages);

   return 0;
}
