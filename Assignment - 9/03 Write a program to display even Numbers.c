#include <stdio.h>
#include <conio.h>

void DisplayRangeEven(int Start,int End)
{
   while(Start <= End)
   {
     if(Start % 2 == 0)
     {
       printf(" %d ",Start);
     }
     Start++;
   }
}

int main()
{
  int No1 = 0, No2 = 0;

  printf("\n\t Enter Starting Point => ");
  scanf("%d",&No1);

  printf("\n\t Enter Ending Point => ");
  scanf("%d",&No2);

  DisplayRangeEven(No1,No2);

  return 0;
}
