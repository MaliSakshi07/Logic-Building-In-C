#include<stdio.h>
#include<conio.h>

int Factorial(int Num)
{
    int i = 1;
    if(Num < 0)
    {
        Num = 0 - Num;
    }

    while(Num > 1)
    {
        if(Num % 2 != 0)
        {
            i = i*Num;
        }
        Num--;
    }

    return i;
}

int main()
{
    int No = 0, Ret = 0;

    printf("Enter a Number :");
    scanf("%d",&No);

    Ret = Factorial(No);

    printf("\nOdd Factorial Of Given Number : %d",Ret);

    getch();
    return 0;
}
