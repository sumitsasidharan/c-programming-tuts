// 8. Write a C program – using structures for reading the employee details like employee name, date of joining and salary and also to compute Total salary outgo for a month

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct personal
{
   char name[20];
   int day;
   char month[10];
   int year;
   float salary;
};

void main()
{
   struct personal person[10];
   char month[20];
   int i, n;
   float m, totalsalary = 0;

   printf("Enter the number of entries\n");
   scanf("%d", &n);

   printf("\nInput Values\n");
   for (i=0; i<n; i++)
   {
      scanf("%s %d %s %d %f",
               person[i].name,
               &person[i].day,
               person[i].month,
               &person[i].year, &person[i].salary);
      // person[i].salary = m;
   }

   printf("\nOutput Values\n");
   for (i=0; i<n; i++)
   {
      printf("%s %d %s %d %f\n", person[i].name, person[i].day, person[i].month, person[i].year, person[i].salary);
   }

   printf("\nEnter the month\n");
   scanf("%s", month);

   for (i=0; i<n; i++)
   {
      // if the query matches, strcmp returns 0
      if (strcmp(person[i].month, month) == 0)
         totalsalary += person[i].salary;
   }

   printf("Total salary = %f", totalsalary);

}