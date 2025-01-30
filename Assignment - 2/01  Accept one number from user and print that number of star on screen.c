#include<stdio.h>
#include<conio.h>
void Display(int);

int main()
{
    int No = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&No);

    printf("\n");

    Display(No);

    getch();
    return 0;
}

void Display(int Num)
{
    int i=0,j=0;

    for(i=1; i<=Num;i++)
    {
        for(j=1;j<=Num;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n======================\n");

    return;
}
