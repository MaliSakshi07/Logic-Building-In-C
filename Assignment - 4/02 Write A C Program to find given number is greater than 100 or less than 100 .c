#include<stdio.h>
#include<conio.h>

void Display(int No)
{
    if(No >= 100)
    {
        printf("\nGiven Number is Greater than 100.");
    }
    else
    {
        printf("\nGiven Number is Less than 100.");
    }
}

int main()
{
    int Num = 0;

    printf("\nEnter a Number :");
    scanf("%d",&Num);

    Display(Num);

    getch();
}
