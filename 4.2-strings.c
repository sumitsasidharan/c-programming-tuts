#include <stdio.h>
#include <string.h>

int main()
{
   char name[20];  // '\0'

   printf("What is your name? ");
   scanf("%19s", name);

   // looping through a string
   int letter = 0;
   while (name[letter] != '\0')
   {
      letter++;
   }

   printf("Size of name is %d\n", letter);
   printf("Size of name is %lu \n", strlen(name));

   int bools = strcmp(name, "sumit"); // this returns 0
   printf("%d \n", bools);

   if (strcmp(name, "Sumit") == 0)
   {
      printf("You get access! \n");
   }

   char copy[20];
   strcpy(copy, name);

   char lastName[] = " Sasidharan";
   strcat(copy, lastName);

   printf("Full Name: %s \n", copy);

   return 0;
}