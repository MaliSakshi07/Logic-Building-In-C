#include<stdio.h>
#include<conio.h>

void Display(char ch)
{
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("\nGiven Character is Vowel.");
    }
    else
    {
        printf("\nGiven Character is Not Vowel.");
    }
}

int main()
{
    char ch = '/0';

    printf("Enter a Character :");
    scanf("%c",&ch);

    Display(ch);

    getch();
    return 0;
}
