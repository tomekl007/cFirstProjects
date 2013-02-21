#include <stdio.h>

int main()
{
	int x;
	int y;
	printf("Podaj liczba calkowita x: ");
	scanf("%d", &x);
	printf("Podaj liczba calkowita y: ");
	scanf("%d", &y);
	int wynik=x+y;
	printf("Suma wartosci zmiennych x i y wynosi: %x\n", wynik);
}

