#include <stdio.h>
#include <stdlib.h>

int main (void)
{ int tablica[4][1];
  int i,pom;

  printf("Podaj 4 wartosci ca³kowite/n");
   for (i=0;i<4;i++)
    { printf("\ntablica[%d]=",i);
      scanf("%d",&pom); // do adersu pom daje adres scanowanej liczby
      *tablica[i]=pom;  // do zawartosci wskazujacej tablica[0] daje wartosc z pom
    }
  printf("Wartosci z tablicy oraz ich adresy\n");
   for (i=0;i<4;i++)
    {
    printf("tablica[%d][0]=%d Adres zapisany w %d elemencie tablicy %p\n",i,*tablica[i],i,tablica[i]);
          // tablica [0][0] = wartosc ktora przrzechowuje *tablica[0](czyli pom) w itym(0) elemencie tablicy adres : tablica[0]
    }

  return 0;
}
