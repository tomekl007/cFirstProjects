#include <stdio.h>
#include <stdlib.h>

typedef struct kol
{
   int wartosc;
   struct kol *nast;
   struct kol *pop;
}kolejka;


void wstaw_do_kolejki(kolejka **glowa, kolejka **koniec, int wartosc)
{

  kolejka *nowy_element;
  nowy_element= (kolejka *)malloc(sizeof(kolejka));
  nowy_element->wartosc=wartosc;
  nowy_element->nast=NULL;
  nowy_element->pop=NULL;

  if(*glowa==NULL)
  {
    *glowa=nowy_element;
    *koniec=nowy_element;
  }

  else
  {
   nowy_element->pop=(*koniec);
   (*(*koniec)).nast=nowy_element;
   (*koniec)=nowy_element;
   }
}

void usun_z_kolejki(kolejka **glowa)
{
 kolejka *pom=*glowa;

 if(*glowa==NULL)
 {
  printf("Pusta kolejka");
  }

  else if((*(*glowa)).nast==NULL)
  {
   printf("\nUsunieto %d\n", pom->wartosc);
   *glowa=NULL;
   }

   else
   {
   printf("Usunieto %d\n", pom->wartosc);
   *glowa=(*(*glowa)).nast;
   (*(*glowa)).pop=NULL;
   free(pom);
   }
}

void drukuj(kolejka *glowa)
{
  if(glowa==NULL)
  printf("Pusta kolejka");

  else while(glowa!=NULL)
  {
   printf("%d ", (*glowa).wartosc);
   glowa=glowa->nast;
  }
}

int main()
{
  int i; kolejka *glowa=NULL;
  kolejka *koniec=NULL;

  for (i=1;i<6;i++)
  wstaw_do_kolejki(&glowa,&koniec,i);

  drukuj(glowa);
  return 0;
}
