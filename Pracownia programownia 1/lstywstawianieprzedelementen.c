#include <stdio.h>
#include <stdlib.h>

struct element_listy
{
   int wartosc;
   struct element_listy *nast;
}

*glowa=NULL,*element ;


int dodaj_nowy_element(int wartosc) //funkcja dodajaca jeden element do listy

{
  struct element_listy *pom;
  pom=malloc(sizeof(struct element_listy));
  pom->wartosc=wartosc;

  if(glowa==NULL) // tworzenie g³owy isty
      { (*pom).nast=NULL;
         glowa=pom;
         element=glowa;
      }

  else
     {
        pom->nast=NULL;
        element->nast=pom;
         element=pom;
      }

   return 0;
}

struct element_listy *szukaj(int szukana_wartosc)

{   int i = 0;
    struct element_listy *pom;
    pom=glowa;

    while(pom!=NULL)
    {
       if(pom->wartosc==szukana_wartosc)
       {
        pom=glowa;
        if(i=1)
        {
         return pom;
        }
        else
        {
         for(int b = 0 ; b <= i-1;b++)
         pom=pom->nast;
         return pom;
        }


       }
       pom=pom->nast;
       i++;
     }
     return NULL;
}


void wstaw_element (struct element_listy *element_wybrany,int nowa_wartosc)

{
  struct element_listy *pom,*pom1;
  pom=malloc(sizeof(struct element_listy));
  pom->wartosc=nowa_wartosc;
  pom1=element_wybrany; //do pom1 daje structure po ktorej ma byc wstawiona nowa wartosc
  pom->nast=pom1->nast; //do wsk *nast z pom[0] daje adres z poprzedzajacej pom[1]
  pom1->nast=pom;
}


void drukuj_cala_lista(void)
{

struct element_listy *pom;
int i=1; pom=glowa;

while(pom!=NULL)
  {
    printf("%d-element to->%d \n",i,pom->wartosc);
    pom=pom->nast;
    i++;
   }
}



int main(void)

{
  int i=1,kolejny=1,wartosc,nowa_wartosc;

  while(kolejny==1)
  {
    printf("Podaj wartosc dla %d elementu listy ",i);
    scanf("%d",&wartosc);
    dodaj_nowy_element(wartosc);
    printf("Jezeli chesz wygenerowac kolejny element wybierz ->1 ");
    scanf("%d",&kolejny);
    i++;
   }


   drukuj_cala_lista();
   printf("Podaj wartosc elementu przed ktorym chcesz wstawic ");
   scanf("%d",&wartosc);

   if (szukaj(wartosc)==NULL)
     printf("Nie ma takiego elementu");

   else
   {
     printf("Podaj wartosc dla nowego elementu ");
     scanf("%d",&nowa_wartosc);
     wstaw_element (szukaj(wartosc),nowa_wartosc);
    }

    drukuj_cala_lista();


  return 0;
}
