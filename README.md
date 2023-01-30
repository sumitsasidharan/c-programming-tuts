# c-programming-tuts

## Memory Allocation

```c
#include <stdio.h>
#include <stdlib.h> // required for memory functions

int main()
{
   int size;
   printf("How many elements u need?: ");
   scanf("%d", &size);

   int *arr = malloc(size * sizeof(int));
   for (int i = 0; i <size; i++)
   {
      scanf("%d", &arr[i]);
   }

   printf("Your array: \n");

   for (int i = 0; i < size; i++)
   {
      printf("arr[%d] = %d\n", i, arr[i]);
   }

   free(arr);

   return 0;
}
```