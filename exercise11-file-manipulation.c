// Read and write data to file.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
   FILE *f1, *f2; // declared two file pointers
   char ch;

   printf("Data Input\n\n");

   // fopen - opens a file, creates new file if doesn't exist
   // 2 arguments -> filename & Access mode. 'w' -> Open the file in Write Mode.
   f1 = fopen("INPUT", "w");

   // each character in the file is read until EOF
   while ((ch = getchar()) != EOF)
   
   // the read characters are put into the file f1
   putc(ch, f1);
   fclose(f1);  // close the file

   printf("\nData Output\n\n");

   // Opening the filename "INPUT" in 'r' read access mode.
   f1 = fopen("INPUT", "r");
   while ((ch = getc(f1)) != EOF)

   printf("%c", ch);
   fclose(f1);

   // check and exit if file is empty
   f1 = fopen("INPUT", "r");
   if (f1 == NULL)
   {
      printf("no data\n");
      exit(0);
   }

   f2 = fopen("file2", "w");
   if (f2 == NULL)
   {
      printf("Unable to open\n");
      exit(0);
   }

   // Transfering characters from file1 to file2
   while ((ch = getc(f1)) != EOF)
   putc(ch, f2);  // This line writes the character 'ch' into file f2.
   printf("completed");

   fclose(f1);
   fclose(f2);

   return 0;
}