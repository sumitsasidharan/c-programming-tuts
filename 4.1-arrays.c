#include <stdio.h>

int main()
{
   int ages[] = { 2, 9, 38, 2, 8 };
   int size = sizeof(ages) / sizeof(ages[0]);

   // 2d array
   int const rows = 3;
   int const columns = 4;

   int studentGrades[rows][columns] = {
      { 1, 2, 9, 2},
      { 6, 2, 8, 7},
      { 78, 25, 54, 6}
      
   };

   for (int i = 0; i < rows; i++)
   {
      for (int j = 0; j < columns; j++)
      {
         printf("%d ", studentGrades[i][j]);
      }
      printf("\n");
   }



   return 0;
}