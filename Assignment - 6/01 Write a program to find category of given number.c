#include<stdio.h>
#include<conio.h>

void Number(int Num)
{
   if(Num < 50)
   {
       printf("\nValue is Small!!");
   }
   else if(Num > 50 && Num < 100)
   {
       printf("\nValue is Medium!!");
   }
   else
   {
       printf("\nValue is Large!!");
   }
}

int main()
{
    int value = 0;

    printf("\nEnter a Value :");
    scanf("%d",&value);

    Number(value);

    getch();
}
