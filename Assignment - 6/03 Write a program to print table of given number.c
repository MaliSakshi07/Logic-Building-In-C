#include<stdio.h>
#include<conio.h>

void Table(int Num)
{
    int i = 0;

    for(i=1; i <= 10; i++)
    {
        printf("\n%d * %d = %d",i,Num,i*Num);
    }
}

int main()
{
    int No = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    Table(No);

    getch();
}
