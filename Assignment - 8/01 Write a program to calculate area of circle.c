#include<stdio.h>
#include<conio.h>
#define Pi 3.14

float CircleArea(float Radius)
{
    float Area = 0;

    Area = (Pi*Radius*Radius);

    return Area;

}
int main()
{
    float value = 0, Red = 0;

    printf("\nEnter Redius :");
    scanf("%f",&value);

    Red = CircleArea(value);

    printf("\nArea of Circle : %f",Red);

    getch();
    return 0;
}
