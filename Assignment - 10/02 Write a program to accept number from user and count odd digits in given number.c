#include<stdio.h>
#include<conio.h>

int OddCount(int no)
{
    int Dig = 0, Cnt = 0;
    while(no > 0)
    {
        Dig = no % 10;
        if(Dig%2 != 0)
        {
            Cnt++;
        }
        no = no/10;
    }
    return Cnt;
}
int main()
{
    int No = 0, Res = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    Res = OddCount(No);

    printf("\nCount of Odd Number : %d",Res);

    getch();
    return 0;
}
