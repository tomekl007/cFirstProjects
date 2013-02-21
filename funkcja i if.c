#include <stdio.h>
main()
{
int a,b;
int potega();
int *y;
int *x;

puts("Program dziêki utworzonej funkcji podniesie do kwadratu wartoœci podane przez u¿ytkownika.");
puts("Podaj wartoœæ dla zmienne a:");
scanf("%d",&a);
y=&a;
puts("Podaj wartoœæ dla zmienne b:");
scanf("%d",&b);
x=&b;
potega();
printf("wartosc a jest rowne int x , wartosc b jest rowne int y",a,b);
return 0;
}

int potega()
{
int *y;
int *x;
int a,b;
a=(*x)*(*x);
b=(*y)*(*y);
}
