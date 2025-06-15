#include<stdio.h>
#include<conio.h>

int SquareArea(int A)
{
    int Area = 0;

    Area = A*A;

    return Area;
}

int main()
{
    int Value = 0, Ret = 0;

    printf("\nEnter a Value :");        ///5
    scanf("%d",&Value);

    Ret = SquareArea(Value);

    printf("\nArea Of Square : %d",Ret);

    getch();
    return 0;
}
