#include<stdio.h>
#include<conio.h>

void Display(No)
{
    int i = 0;

    for(i = 1; i <= No; i++)
    {
        printf(" %d ",i);
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
