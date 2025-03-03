#include<stdio.h>
#include<conio.h>

int DollerToINR(int Num)
{
    return (Num*70);

}
int main()
{
    int No = 0, Ret;

    printf("\nEnter Number Of USD = ");
    scanf("%d",&No);

    Ret = DollerToINR(No);

    printf("\nValue in INR = %d",Ret);

    getch();
    return 0;
}
