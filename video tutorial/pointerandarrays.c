#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
  int x[100];
  int *px;

  px = x;
  *px = 2;
  printf("%d\n",x[0]);

  px[3]=10;
  x[3]=10;

  px = px + 1;
  *px = 4 ;
  printf("%d",x[1]);

return 0;
}
