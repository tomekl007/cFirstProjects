#include <stdio.h>
main()
{
int a,b;
int potega(void);
puts("Program dziêki utworzonej funkcji podniesie do kwadratu wartoœci podane przez u¿ytkownika.");
puts("Podaj wartoœæ dla zmienne a:");
scanf("%d",&a);
puts("Podaj wartoœæ dla zmienne b:");
scanf("%d",&b);
potega(&a,&b);
printf("Wartoœæ zmiennej a podniesiona do kwadratu %d a wartoœæ zmiennej b podniesiona do kwadratu jest równa %d",a,b);
return 0;
}
potega(int *x, int *y)
{
*x=(*x)*(*x);
*y=(*y)*(*y);
}
