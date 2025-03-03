#include <stdio.h>
#include <conio.h>

int EvenFactorial(int Num)
{
  int I = 1;

  while( Num > 1)
  {
    if(Num % 2 == 0)
    {
      I = I * Num;
    }

    Num--;
  }
  return I;
}

int main()
{
  int No = 0, Ret = 0;

  printf("\nEnter A value => ");
  scanf("%d",&No);

  Ret = EvenFactorial(No);

  printf("\nEven Factorials of given number = %d",Ret);

  return 0;
}
