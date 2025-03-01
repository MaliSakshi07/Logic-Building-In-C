#include<stdio.h>
#include<conio.h>

void DisplayFactor(int No)
{
    int i = 1, Ans = 0;

    while(i <= No)
    {
        Ans = i*No;
        i++;
    }

    printf("Factor = %d",Ans);

}

int main()
{
    int Num = 0;

    printf("\nEnter a Number :");
    scanf("%d",&Num);

    DisplayFactor(Num);

    getch();

}
