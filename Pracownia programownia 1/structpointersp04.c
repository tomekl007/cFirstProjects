#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct magazyn
  {
     int numer_towaru;
     char nazwa_towaru[20];
     float cena_netto, cena_brutto;
  };

struct magazyn t,*towar;


int main(void)
{
   towar=&t;
   float cena;

   printf("Wpisz numer towaru >>>> ");
   scanf("%d",&(towar->numer_towaru));
   printf("\nPodaj nazwe towaru max 20 znakow bez spacji >>>>");
   scanf("%s",towar->nazwa_towaru);
   printf("\nOkresl cene brutto >>>> ");
   scanf("%f",&cena);
   towar->cena_brutto=cena;
   towar->cena_netto=-0.25*towar->cena_brutto+towar->cena_brutto;
   system("pause");

   return 0;
}
