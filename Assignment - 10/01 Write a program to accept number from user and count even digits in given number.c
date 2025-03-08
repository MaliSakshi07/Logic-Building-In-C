#include<stdio.h>
#include<conio.h>

int EvenDigit(int Num)
{
    int Sum = 0, Dig = 0;
   while(Num > 0)
   {
     Dig = Num%10;
     if(Dig%2 == 0)
     {
        Sum++;
     }
     Num = Num/10;
   }
    return Sum;
}

int main()
{
    int No = 0, Res = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    Res = EvenDigit(No);

    printf("Even Digit Of Given Numbers :%d",Res);

    getch();
    return 0;
}
