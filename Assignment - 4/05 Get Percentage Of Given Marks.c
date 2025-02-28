#include<stdio.h>
#include<conio.h>

int Percent(int Tmarks,int Omarks)
{
    float Per =0;

    Per = (Omarks*100)/Tmarks;

    return Per;

}

int main()
{
    int T_marks = 0, O_Marks = 0;
    float Ret = 0;

    printf("\nEnter Total Marks :");
    scanf("%d",&T_marks);

    printf("\nEnter Obtained Marks :");
    scanf("%d",&O_Marks);

    Ret = Percent(T_marks,O_Marks);

    printf("\nPercentage = %0.1f",Ret);

    getch();
    return 0;
}
