#include <stdio.h>
#include <conio.h>

int Sum(int Start,int End)
{
  int Ans = 0;

   while(Start <= End)
   {
     Ans = Ans + Start;

     Start++;
   }
   return Ans;
}

int main()
{
  int S_No = 0,E_No = 0,Ret = 0;

  printf("\nEnter Starting Point => ");
  scanf("%d",&S_No);

  printf("\nEnter Ending Point => ");
  scanf("%d",&E_No);

  Ret = Sum(S_No,E_No);

  printf("\nAddition = %d",Ret);

  return 0;
}
