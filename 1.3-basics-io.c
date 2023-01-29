#include <stdio.h>

int main()
{
   // declaration & initialization
   int x = 33;

   int radius;

   printf("give me a radius \n");
   scanf("%d", &radius);

   printf("the radius is: %d \n", radius);

   char name[20];
   printf("what's your name? \n");
   scanf("%s", name);
   printf("Hello %s", name);

   return 0;
}