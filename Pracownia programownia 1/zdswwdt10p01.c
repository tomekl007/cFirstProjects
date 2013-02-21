#include <stdio.h>
#include <stdlib.h>


int wprowadz(int tablica[],int rozmiar)
{
  for (int i=0;i<rozmiar;i++)
   {

        tablica[i]=i;

   }


}





int wprowadz(float tablica[],int rozmiar)
{
      for (int i=rozmiar;i<0;i--)
   {

        tablica[i]=i;

   }

    tablica

}


int main (void)

{
 int tablica[10];
 float tablica[10];

 wprowadz(int tablica,10);

 printf("Wartosci z tablicy:\n");
 for (i=0;*tablica[i];i++)
   { printf("%s ",tablica[i]); }
 printf("\n");

 return 0; }
