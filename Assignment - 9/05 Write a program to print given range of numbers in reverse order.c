#include<stdio.h>
#include<conio.h>

int Reverse(int Start, int End)
{
    while(End >= Start)
    {
        printf("%d",End);
        End--;
    }

    return End;
}

int main()
{
    int S_No = 0, E_No = 0, Ret = 0;

    printf("\nEnter Starting No :");
    scanf("%d",&S_No);

    printf("\nEnter Starting No :");
    scanf("%d",&E_No);

    Ret = Reverse(S_No, E_No);

    getch();
    return 0;
}
