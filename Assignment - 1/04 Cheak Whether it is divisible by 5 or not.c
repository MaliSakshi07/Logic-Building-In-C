#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

     if(No%5 == 0)
    {
        printf("\n%d is Divisible By 5.",No);
    }
    else
    {
        printf("\n%d is not Divisible By 5.\n",No);
    }

    getch();
    return 0;
}
