#include <stdio.h>

int main()
{
   int size = 10;
   int ages[] = { 12, 44, 92, 34, 14, 27, 7, 3, 98 };


   // for (int i = 0; i < 10; i++)
   // {
   //    for (int j = i; j >= 0; j--)
   //    {
   //       printf("%d ", j);
   //    }
   //    printf("\n");
   // }

   // while loop
   int i = 0;
   while (i < 10)
   {
      printf("%d ", i);
      i++;
   }

   
   int input;
   do
   {
      /* code */
      printf("choose a number between 0 and 9: ");
      scanf("%d", &input);
      
   } while (input < 0 || input > 9);
   

   return 0;
}
