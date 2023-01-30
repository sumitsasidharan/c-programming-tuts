#include <stdio.h>

typedef struct
{
   int length;
   int width;
} rectangle;

typedef struct position
{
   int x;
   int y;
} position;

typedef struct buildingPlan
{
   char owner[30];
   rectangle rectangle;
   position position;
} buildingPlan;

int main()
{
   rectangle myRectangle = { 5, 10 };

   printf("Length: %d. Width: %d\n", myRectangle.length, myRectangle.width);

   buildingPlan myHouse = { "Sumit Sasidharan", {5, 10}, { 23, 34 } };

   printf("The house at %d %d (size %d %d) is ownded by %s\n",
      myHouse.position.x,
      myHouse.position.y,
      myHouse.rectangle.length,
      myHouse.rectangle.width,
      myHouse.owner
   );


   return 0;
}