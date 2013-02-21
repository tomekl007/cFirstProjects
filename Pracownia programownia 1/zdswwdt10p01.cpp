#include <stdio.h>
#include <stdlib.h>


int wprowadz(int tablica[],int rozmiar)
{
   int i = 0 ;

  for (i=0;i<rozmiar;i++)
   {

        tablica[i]=i;

   }
 printf("Wartosci z tablicy:\n");
 for (i=0;i<rozmiar;i++)
   { printf("%d ",tablica[i]); }
 printf("\n");



}





int wprowadz(float tablica[],int rozmiar)
{
    int i = 0;
      for (int i=rozmiar;i<0;i--)
   {

        tablica[i]=i;

   }

 printf("Wartosci z tablicy:\n");
 for (i=0;i<rozmiar;i++)
   { printf("%d ",tablica[i]); }
 printf("\n");






}


int wprowadz(char *tablica[],int rozmiar)
{  int i = 0;
   tablica[0]="string";
   tablica[1]="to";
   tablica[2]="parametr";




 printf("Wartosci z tablicy:\n");
 for (i=0;i<3;i++)
   { printf("%s ",tablica[i]); }
 printf("\n");


}





int main (void)

{


 int calkowite[10];
 float rzeczywiste[10];
 char *lancuch[10];


 wprowadz(lancuch,10);



 return 0; }
