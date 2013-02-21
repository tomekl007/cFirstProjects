#include <stdio.h>
#include <stdlib.h>

int main (void)
{ int i, rozmiar_tablicy;
  int *tab;

  printf("Podaj, ile elementow chcesz utworzyæ: ");
  scanf("%d", &rozmiar_tablicy);
  tab = (int*)malloc(rozmiar_tablicy * sizeof *tab); //(int*) mozna pominac
  for(i=0;i<rozmiar_tablicy;i++)
    { tab[i]=i; }
  for(i=0;i<rozmiar_tablicy;i++)
   {
    printf("tab[%d]=%d\n",i,tab[i]);
   }
   free(tab);

   return 0;
}
