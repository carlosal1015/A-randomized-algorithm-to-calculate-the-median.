#include<stdio.h>

void printMessage(int v)
{
  int g = v + 5;
  g = g + 3;
  printf("The value of g is %d\n", g);
}

int main (void)
{
  int a = 0;
  a += 1;
  a += 2;
  a += 3;
  printMessage(a);

  return 0;
}