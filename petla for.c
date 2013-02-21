#include <stdio.h>
main()
{
int a=0,b=0;
while(a==0)
{
printf("*");
b++;
if(b==50) goto skok;
}
skok:
puts("\nKoniec");
return 0;
}
