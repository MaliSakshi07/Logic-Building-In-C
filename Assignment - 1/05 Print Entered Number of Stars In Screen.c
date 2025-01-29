#include<stdio.h>
#include<conio.h>

void Star(int Num)
{
    int  i=0 , j=0;

     for(i=1; i<=Num; i++)
    {
        for(j=1; j<=Num; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}


int main()
{
    int No=0;

    printf("\nEnter a Number To Print Star :");
    scanf("%d",&No);

    printf("\n");

    Star(No);

    getch();
    return 0;
}

