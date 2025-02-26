#include<stdio.h>
#include<conio.h>

void Display(int No, int Value)
{
    int count = 0;

    for(count = 1; count <=Value; count++)
    {
        printf("\n%d",No);
    }
}

int main()
{
    int Num =0, Cnt = 0;

    printf("\nEnter a Number :");
    scanf("%d",&Num);

    printf("\nEnter a Count :");
    scanf("%d",&Cnt);

    Display(Num, Cnt);

    getch();
    return 0;
}
