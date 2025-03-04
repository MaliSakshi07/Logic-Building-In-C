#include<stdio.h>
#include<conio.h>

int RectangleArea(float Length, float Width)
{
    float Area = Length *Width;

    return Area;
}

int main()
{
    float l = 0, w = 0, Res = 0;

    printf("\nEnter a Length :");
    scanf("%f",&l);

    printf("\nEnter a Width :");
    scanf("%f",&w);

    Rect = RectangleArea(l,w);

    printf("\nArea Of Rectangle = %f",Rect);

    getch();
    return 0;
}
