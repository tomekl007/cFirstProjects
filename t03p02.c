#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	int y;
	printf("Podaj liczba calkowita x: ");
	scanf("%d", &x);
	printf("Podaj liczba calkowita y: ");
	scanf("%d", &y);
	int wynik=pow(x,0.25);
	int wynik2=pow(y,0.25);
	printf("pierwiastek 4 stopnia z x to: %d\n a pierwiastek 4 st z y to:%d\n",wynik,wynik2);
	return 0;
}
