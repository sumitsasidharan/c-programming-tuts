## How to Compile C programs using GCC compiler

- `gcc filename.c`
- `./a.exe`

### 1. Write a C program to find the sum of individual digits of a positive integer.

```c
#include <stdio.h>
#include <conio.h>

int main()
{
   int num, k = 1, sum = 0;
   // clrscr();

   printf("Enter the number whose digits are to be added: ");
   scanf("%d", &num);

   while(num != 0)
   {
      k = num % 10;  // for getting the last digit
      sum = sum + k;  // keep adding the last digit to sum
      k = num / 10;  // get the remaining number, eg 153 / 10 = 15, k becomes 0 when num is single digit
      num = k; // k is assigned to num
   }

   printf("\nSum of the digits: %d \n", sum);

   return 0;
}
```

### 10. Write a C Program – using pointers To Swap the Values of Two Variables.

```c
#include <stdio.h>
#include <conio.h>

int main()
{
   int x, y, *a, *b, temp;

   printf("Enter the values of x and y\n");
   scanf("%d%d", &x, &y);
   
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
   a = &x;
   b = &y;

   temp = *b;
   *b = *a;
   *a = temp;
   
   printf("\nAfter Swapping\nx = %d\ny = %d\n", x, y);
   
   return 0;
}
```

