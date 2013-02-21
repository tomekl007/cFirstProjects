#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int square(int x)
{
int result;

result=x*x;

return result;
}

int main()
{
 int a = 2;
 int x;
 int result

 x = square(a);
 result = square(10);

 result = square(3) + square(4) * 9 ;
 result = square( square(2) );


return 0;
}
