#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 15;
    double money = 30000;
    bool isGraduated = true;

    if (age > 17 && money > 24000 || isGraduated)
    {
      printf("This  is true \n ");
    } 
    else
    {
      printf("FALSE \n");
    }

   int option;
   printf("1: PRINT HELLO \n");
   printf("2: PRINT COUNTRY \n");
   printf("3: PRINT CAPITAL \n");
    printf("choose the option: ");

    scanf("%d", &option);
   
   switch(option) {
      case 1:
         printf("CASE 1 \n");
         break;

      case 2:
         printf("CASE 2 \n");
         break;

      case 3:
         printf("CASE 3 \n");
         break;

      default:
         printf("nothing");
   }


   return 0;
}

// void printHello() {
//    printf("Hello there \n");
// }
// void printCountry() {
//    printf("India is my country \n");
// }
// void printCapital() {
//    printf("Delhi is the capital of India... \n");
// }
