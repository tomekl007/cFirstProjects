#include <stdio.h>
#include <stdlib.h>

int main (void)
{

    int i, rozmiar_tablicy=10;
    char *tab, temp, znak;

    tab = (char*)calloc(rozmiar_tablicy,sizeof(char)); //funkcja calloc po przydzieleniu pamieci zeruje ja
    for(i=0;i<5;i++)
    { printf("Podaj znak: ");

    scanf("%c",&tab[i]);
    printf("\n");
       for(temp='0';temp!='\n';temp=getchar());//czyszczenie bufora klawiatury
    }
    for(i=0;i<rozmiar_tablicy;i++)
    { printf("tab[%d]=%c\n",i,tab[i]); }

    free(tab);

    return 0;
}
