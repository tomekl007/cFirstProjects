#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data
{unsigned int rok,miesiac,dzien;};

struct magazyn
{
  int numer_towaru;
  char nazwa_towaru[20];
  float cena_netto, cena_brutto;
  struct data data_zakupu; };

struct magazyn towar;

int main(void)
{
   char temp;

   printf("Wpisz numer towaru >>>> ");
   scanf("%d",&towar.numer_towaru);
   printf("\nPodaj nazwe towaru max 20 znakow bez spacji >>>> ");
   scanf("%s",towar.nazwa_towaru);
   printf("\nOkresl cene brutto >>>> ");
   scanf("%f", &towar.cena_brutto);
   towar.cena_netto=-0.25*towar.cena_brutto+towar.cena_brutto;
   printf("\nPodaj date zakupu (rok,miesiac,dzien) >>>>\n");
   scanf("%u%u%u",&towar.data_zakupu.rok, &towar.data_zakupu.miesiac,&towar.data_zakupu.dzien);
   printf("WPROWADZONO DANE TOWARU\n");
   printf("Numer towaru: %d ",towar.numer_towaru);
   printf("Nazwa towaru: %s ",towar.nazwa_towaru);
   printf("Cena brutto: %.2f ",towar.cena_brutto);
   printf("Cena netto: %.2f ",towar.cena_netto);
   printf("\nData zakupu:%u-%u-%u", towar.data_zakupu.rok, towar.data_zakupu.miesiac,towar.data_zakupu.dzien);
   for (temp='0'; temp!='\n' ;temp=getchar());
   getchar();

   return 0;
}
