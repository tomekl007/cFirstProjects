#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
 char imie[30];
 char nazwisko[20];
 char nazwapl[]={"wygrales"};
 FILE *plik;

printf("\n\n-------------------------GRATUALCJE !! PRZESZLES GRE !!-------------------------- \n\n\n");
   plik = fopen(nazwapl, "w" );
   printf("podaj swoje Imie zwyciesco :  ");
   fgets(imie,15,stdin);
   printf("i Nazwisko :  ");
   fgets(nazwisko,20,stdin);
   strcat(imie,nazwisko);

   fprintf(plik,"Przeszles gre :\n\n%s \n Ten plik jest tego dowodem ! Zachowaj go !!",imie);
   printf("dowod przejscia tej gry przez Ciebie\nzostal zapisany na dysku w postaci dokumentu tekstowego\n\n\n");
}
