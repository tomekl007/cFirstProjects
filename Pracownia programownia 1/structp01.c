#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct magazyn    //mozna : typedef struct magazyn
  {
    int numer_towaru;
    char nazwa_towaru[20];
    float cena_netto, cena_brutto;
   };

 struct magazyn towar;


int main (void)
{
 char temp;

 printf("Wpisz numer towaru >>>> ");
 scanf("%d", &towar.numer_towaru);
 printf("\nPodaj nazwe towaru, max. 20 znakow >>>> ");
 scanf("%s", towar.nazwa_towaru);
 printf("\nOkresl cene brutto >>>> ");
 scanf("%f", &towar.cena_brutto);
 towar.cena_netto=-0.25*towar.cena_brutto+towar.cena_brutto;
 //wyswietlanie struktur w 1 linii
 printf("WPROWADZONO DANE TOWARU\n");
printf("Numer towaru: %d ",towar.numer_towaru);
printf("Nazwa towaru: %s ",towar.nazwa_towaru);
printf("Cena brutto: %.2f ",towar.cena_brutto);
printf("Cena netto: %.2f ",towar.cena_netto);

  for (temp='0'; temp!='\n' ;temp=getchar()); //czysczenie buforu klawiatury
  getchar ();
return 0; }
