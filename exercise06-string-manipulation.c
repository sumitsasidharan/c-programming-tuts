// 6. Write a C Program to extract a portion of a string from a character string

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
   char str1[50], str2[50];
   int i,j,n,m,l;

   printf("Enter the string\n");
   gets(str1);

   printf("Enter the position of the required character: ");
   scanf("%d", &n);
   
   printf("Enter the number of characters to be extracted: ");
   scanf("%d", &m);

   l = strlen(str1);
   if (m + n - 1 < l)
   {
      for (i=n-1, j=0; i<m+n-1; i++, j++)
         str2[j] = str1[i];
      str2[j] = '\0';
      printf("The extracted string is: %s", str2);
   }
   else
      printf("String extraction is not possible");
   
}