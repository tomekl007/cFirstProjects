#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int twice(int x, int *pThrice)
{
   int tw;

   tw=2*x;

   *pThrice = 3 * x;

    return tw;
}

int main()
{
  int num=10;
  int result2;
  int result3;

    result2 = twice(num,&result3);
    result3 = *pThrice(num);



    printf("twice of %d is %d",num,result2);



return 0;
}
