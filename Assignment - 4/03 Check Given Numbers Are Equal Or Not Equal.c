#include<stdio.h>
#include<conio.h>

void Display(int No1,int No2)
{
    if(No1 == No2)
    {
        printf("\nBoth Numbers Are Equal.");
    }
    else
    {
        printf("\nNumbers Are Not Equal.");
    }
}

int main()
{
    int Num1 =0, Num2=0;

    printf("\nEnter 1st Number :");
    scanf("%d",&Num1);

    printf("\nEnter 2nd Number :");
    scanf("%d",&Num2);

    Display(Num1,Num2);

    getch();
}
