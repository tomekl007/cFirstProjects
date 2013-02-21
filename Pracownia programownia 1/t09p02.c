#include <stdio.h>
#include <stdlib.h>

int main (void)
{   int i,rozmiar_tablicy=10;
    int *tab;

    tab = (int*)malloc(rozmiar_tablicy * sizeof *tab); //przy funkcji malloc niewykorzystane wartosc nie sa puste(smieci)

    for(i=0;i<5;i++)
    { tab[i]=i; }

    for(i=0;i<rozmiar_tablicy;i++)
    { printf("tab[%d]=%d\n",i,tab[i]); }
    free(tab);

    return 0;
}
