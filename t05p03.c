#include <stdio.h>
#include <conio.h>

main()
{int x;
 int y;
 printf("podaj wartosc x : ");
 scanf("%d", &x);
 printf("podaj wartosc y : ");
 scanf("%d", &y);
 if (x<y)
 for (int a=x;a<=y;a=a+1)
 {
      printf("%c ",a);
 }
 else
 for(int a=x;a>=y;a=a-1)
 {
     printf("%c ",a);
 }
return 0;

}
