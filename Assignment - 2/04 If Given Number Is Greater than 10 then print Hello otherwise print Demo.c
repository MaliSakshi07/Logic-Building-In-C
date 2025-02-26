#include<stdio.h>
#include<conio.h>

void Display(int No)
{

    if(No >=10)
    {
        printf("\nHello");
    }
    else
    {
        printf("\nDemo");
    }
}

int main()
{
   int Num =0 ;

   printf("\nEnter a Number :");
   scanf("%d",&Num);

   Display(Num);

    getch();
    return 0;
}
