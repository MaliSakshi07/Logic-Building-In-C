#include<stdio.h>
#include<conio.h>

int Pattern(int No)
{
    int i = 0;

    for(i=1; i<=No; i++)
    {
        printf(" * ");

        if(i == No)
        {
           for(i = 1; i<= No; i++)
           {
                printf(" # ");
           }
        }
    }
}

int main()
{
    int x = 0;

    printf("\nEnter a Value for Pattern :");
    scanf("%d",&x);

    Pattern(x);

    getch();
}
