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
    int i = 0;

    if(Num < 10)
    {
        printf("\nHello");
    }
    else
    {
        printf("\nDemo");
    }
    return;
}
