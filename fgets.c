#include<stdio.h>
int main(void)
{
        char nazwisko[10];
        char imie[10];
        int i;
        printf("Podaj swoje nazwisko do 30 znakow ");
        fgets(nazwisko,10,stdin);
        printf("Podaj swoje imie do 10 znakow ");
        fgets(imie,10,stdin);
        printf("Podales nazwisko:  %s  \n", nazwisko);
        printf("Podales imie:  %s  \n", imie);
       return 0;
}
