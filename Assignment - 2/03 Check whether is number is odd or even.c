#include<stdio.h>
#include<conio.h>
void Display(int);

int main()
{
    int No = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    Display(No);

    getch();
    return 0;
}

void Display(int Num)
{
    if(Num%2 == 0)
    {
        printf("\n%d is Even Number.",Num);
    }
    else
    {
        printf("\n%d is Odd Number.",Num);
    }
    return;
}
