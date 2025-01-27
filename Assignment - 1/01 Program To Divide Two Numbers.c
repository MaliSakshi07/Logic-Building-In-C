#include<stdio.h>
#include<conio.h>

int Divide(int Num1 , int Num2)
{
    int Ans = 0;

    Ans = Num1 / Num2;

    return Ans;
}

int main()
{
   int No1 = 20, No2 = 5 , Ret;

   Ret = Divide(No1,No2);

    printf("No1 = %d \nNo2 = %d",No1,No2);
   printf("\n\nDivision  = %d",Ret);

   getch();
   return 0;
}
