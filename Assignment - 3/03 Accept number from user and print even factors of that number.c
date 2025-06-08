#include<stdio.h>
#include<conio.h>

void DisplayFactor(int);

int main()
{
    int No = 0;

    printf("Enter a Number :");
    scanf("%d",&No);

    DisplayFactor(No);

    getch();
    return 0;
}

void DisplayFactor(int Num)
{
    int i = 0;

    if(Num <= 0)
    {
        Num = -Num;
    }

    for(i=1; i<=Num/2; i++)
    {
        if(Num%i == 0 && i%2 ==0)
        {
            printf(" %d",i);
        }
    }
}
