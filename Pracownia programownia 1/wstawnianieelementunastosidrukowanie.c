#include <stdio.h>
#include <stdlib.h>

struct stos
{
   int wartosc;
   struct stos *gora;
   struct stos *dol;
};

struct stos *nowy_element, *wierzcholek = NULL;

void wstaw_na_stos(int wartosc)
{
   if (wierzcholek==NULL)
   {
     nowy_element= malloc (sizeof(struct stos));
     nowy_element->wartosc=wartosc;
     wierzcholek=nowy_element;
     wierzcholek->dol=NULL ;
    }
   else
   {
      nowy_element= malloc (sizeof(struct stos));
      wierzcholek->gora=nowy_element;
      nowy_element->wartosc=wartosc;
      nowy_element->dol=wierzcholek;
      wierzcholek=nowy_element;
    }
}

void pokaz_stos(void)
{
struct stos *wskaznik_na_element,*pom;
pom=wierzcholek;

while (wierzcholek!=NULL)
{
   printf("\t %d\n ",
   wierzcholek->wartosc);
   pom= pom->dol;
   free(wierzcholek);
   wierzcholek=pom;
}

}

int main(void)
{
  int i=1;

  while (i<7)
  { wstaw_na_stos(i); i++; }


 printf("DRUKOWANIE STOSU\n");
 pokaz_stos();

 return 0;
}

