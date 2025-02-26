#include<stdio.h>
#include<conio.h>

void Display(int No)
{
    if(No %2 == 0)
    {
        printf("\n %d is an Even Number.",No);
    }
    else
    {
        printf("\n%d is an Odd Number.",No);
    }
}
int main()
{
    int Num = 0;

    printf("\nEnter a Number :");
    scanf("%d",&Num);

    Display(Num);

    getch();
    return 0;
}
