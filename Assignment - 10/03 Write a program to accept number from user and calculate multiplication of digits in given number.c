#include<stdio.h>
#include<conio.h>

int MultDig(Num)
{
    int dig = 0, Mult = 1;

    while(Num > 0)
    {
        dig=Num%10;
        if(dig != 0)
        {
            Mult = Mult*dig;
        }
        Num = Num/10;
    }
    return Mult;
}

int main()
{
    int No =0 ,Res = 0;

    printf("\nEnter A Number :");
    scanf("%d",&No);

    Res = MultDig(No);

    printf("\nMultiplication Of Given Number : %d",Res);

    getch();
    return 0;
}
