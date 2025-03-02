#include<stdio.h>

void Display(int Num)
{
    int i = 0;

    for(i=10; i>=1; i--)
    {
        printf("\n%d * %d = %d",i,Num,i*Num);

    }
}

int main()
{
    int No = 0;

    printf("\nEnter a Number for Reverse Table :");
    scanf("%d",&No);

    Display(No);

    getch();
}
