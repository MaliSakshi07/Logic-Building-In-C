#include <stdio.h>
#include <conio.h>

void Pattern(int Value)
{
  int I = 0;
  char ch ='A';

  for(I = 1;I <= Value;I++)
  {
    printf(" %c # ",ch);
    ch++;
  }
}
int main()
{
  int Size = 0;

  printf("\n\t Enter Number of elements => ");
  scanf("%d",&Size);

  Pattern(Size);
  return 0;
}
