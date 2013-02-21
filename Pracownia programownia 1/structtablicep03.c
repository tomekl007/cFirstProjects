#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 5

struct data {unsigned int rok,miesiac,dzien;};

struct magazyn
{
  int numer_towaru;
  char nazwa_towaru[20];
  float cena_netto;
  float cena_brutto;
  struct data data_zakupu; };


struct magazyn towar[n];

int main (void)
{

   int i;
   char temp;
   float cena;

   for (i=0;i<n;i++)
   {
      printf("Wpisz numer towaru: ");
      scanf("%d",&(towar[i].numer_towaru));
      printf("\nPodaj nazwe towaru (do 20 znakow bez spacji): ");
      scanf("%s",towar[i].nazwa_towaru);
      printf("\nOkresl cene brutto: ");
      scanf("%f",&cena);
      towar[i].cena_brutto=cena;
      towar[i].cena_netto=-0.25*towar[i].cena_brutto+ towar[i].cena_brutto;
      printf("Podaj date zakupu (rok,miesiac,dzien):\n");
      scanf("%u%u%u",&towar[i].data_zakupu.rok,&towar[i].data_zakupu.miesiac, &towar[i].data_zakupu.dzien);
      printf("\n___________________________________________\n");
    }

    printf("WPROWADZONO DANE TOWAROW\n");

    for (i=0;i<4;i++)
    {
        printf("Numer towaru: %d ",towar[i].numer_towaru);
        printf("Nazwa towaru: %s ",towar[i].nazwa_towaru);
        printf("Cena brutto: %.2f ",towar[i].cena_brutto);
        printf("Cena netto: %.2f ",towar[i].cena_netto);
        printf("\nDatazakupu: %02u-%02u-%02u", towar[i].data_zakupu.rok,towar[i].data_zakupu.miesiac, towar[i].data_zakupu.dzien);
        printf("\n___________________________________________\n");
    }


    for (temp='0'; temp!='\n' ;temp=getchar());
    getchar();

    return 0;
}
