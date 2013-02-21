#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void add(int a, int b)
{
int result;
result = a + b;
printf("the sum %d + %d is %d\n" ,a,b,result);
}

int main()
{
  int a = 2;
  int b = 4;
  int x = 10;
  int y = 20;

  add(a, b);
  add(x,y);



return 0;
}
