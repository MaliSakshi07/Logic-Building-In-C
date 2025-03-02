#include<stdio.h>
#include<conio.h>

void Display(int Num)
{
    if(Num == 0)
    {
        printf("Zero");
    }
    else if(Num == 1 || Num == -1)
    {
        printf("One");
    }
    else if(Num == 2 || Num == -2)
    {
        printf("Two");
    }
    else if(Num == 3 || Num == -3)
    {
        printf("Three");
    }
    else if(Num == 4 || Num == -4)
    {
        printf("Four");
    }
    else if(Num == 5 || Num == -5)
    {
        printf("Five");
    }
    else if(Num == 6 || Num == -6)
    {
        printf("Six");
    }
    else if(Num == 7 || Num == -7)
    {
        printf("Seven");
    }
    else if(Num == 8 || Num == -8)
    {
        printf("Eight");
    }
    else if(Num == 9 || Num == -9)
    {
        printf("Nine");
    }
    else
    {
        printf("\nInvalid Number");
    }
}

int main()
{
    int No = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    Display(No);

    getch();
}
