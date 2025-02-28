#include<stdio.h>
#include<conio.h>

 void Pattern(Num)
 {
    int i = 0;

    for(i=1; i<=Num; i++)
    {
        printf(" %d ",i);
    }
 }

 int main()
 {
     int No = 0;

     printf("\nEnter a Number :");
     scanf("%d",&No);

     Pattern(No);

     getch();
 }
