#include <stdio.h>

// calculate largest value
int oldestValue(int ages[], int size)
{
   int largest = ages[0];
   for (int i = 1; i < size; i++)
   {
      if (ages[i] > largest)
      {
         largest = ages[i];
      }
   }
   return largest;
}

int main()
{
   int size = 7;
   int ages[] = {2, 1, 98, 666, 57, 23, 34};

   printf("%d\n", oldestValue(ages, size));

   return 0;
}