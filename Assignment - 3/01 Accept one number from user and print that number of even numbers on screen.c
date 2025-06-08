#include<stdio.h>
#include<conio.h>
void PrintEven(int);

int main()
{
    int No = 0;

    printf("\nEnter a Number :");     //30
    scanf("%d",&No);

    PrintEven(No);        //30

    getch();
    return 0;
}

void PrintEven(int Num)
{
   int n = 1, c = 1;

   while(c <= Num)
   {
      if(n % 2 == 0)
      {
          c = c+1;
          printf("%d\n",n);
      }
      n++;
   }

    return Num;
}


