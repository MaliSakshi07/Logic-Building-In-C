#include<stdio.h>
#include<conio.h>

int Mult(int No1, int No2, int No3)
{
    if(No1 == 0)
    {
        return No2*No3;
    }
    else if(No2 == 0)
    {
        return No1*No3;
    }
    else if(No3 == 0)
    {
        return No1*No2;
    }

    else if(No1 == 0 && No2 == 0 && No3 == 0)
    {
        return 0;
    }
    else
    {
        return No1*No2*No3;
    }
}

int main()
{
    int Num1 = 0, Num2 = 0, Num3 = 0, Res = 0;

    printf("\nEnter 3 Numbers For Multiplication :");
    scanf("%d%d%d",&Num1,&Num2,&Num3);

    Res = Mult(Num1,Num2,Num3);

    printf("\nMultiplication = %d",Res);

    getch();
    return 0;
}
