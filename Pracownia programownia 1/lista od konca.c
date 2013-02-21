#include <stdio.h>
#include <stdlib.h>

struct element_listy
{
   int wartosc;
   struct element_listy *nast,*pop;
}
*glowa=NULL,*element,*koniec ;

int dodaj_nowy_element(int wartosc) //funkcja dodajaca jeden element do listy

{
 struct element_listy *pom;
 pom=malloc(sizeof(struct element_listy));
 pom->wartosc=wartosc;

 if(glowa==NULL) // tworzenie g³owy isty
  { pom->nast=NULL;
    pom->pop=NULL;
    glowa=pom;
    koniec=pom;
    element=glowa;
  }
  else
  {
    pom->nast=NULL;
    pom->pop=element;
    element->nast=pom;
    element=pom;
    koniec=element;
  }
 return 0;
}



struct element_listy *szukaj(int szukana_wartosc)

{
   struct element_listy *pom;
   pom=glowa;

   while(pom!=NULL)
   {
     if(pom->wartosc==szukana_wartosc)
     return pom;
     pom=pom->nast;
   }
  return NULL;
}

void wstaw_element(struct element_listy *element_wybrany,int nowa_wartosc)

{
   struct element_listy *pom;
   pom=malloc(sizeof(struct element_listy));
   pom->wartosc=nowa_wartosc;

   if(element_wybrany==glowa)
   {
      glowa->pop=pom;
      pom->nast=glowa;
      glowa=pom;
      glowa->pop=NULL;
    }

    else if (element_wybrany==koniec)
    {
        koniec->nast=pom;
        pom->pop=koniec;
        koniec=pom;
        koniec->nast=NULL;
    }

    else
    { pom->pop=element_wybrany;
    pom->nast=element_wybrany->nast;
    (*(*element_wybrany).nast).pop=pom;
    element_wybrany->nast=pom;
    }
}




void drukuj_cala_lista(void)

{
  struct element_listy *pom;
  int i=1; pom=koniec;

  while(pom!=NULL)
  {
   printf("%d-element od konca to->%d \n",i,pom->wartosc);
   pom=pom->pop;
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

  printf("Podaj wartosc elementu po ktorym chesz wstawic ");
  scanf("%d",&wartosc);

  if (szukaj(wartosc)==NULL)
  printf("Nie ma takiego elementu\n");

  else
  {
    printf("Podaj wartosc elementu ktory chesz wstawic ");
    scanf("%d",&nowa_wartosc);
    wstaw_element(szukaj(wartosc),nowa_wartosc);
    printf("Lista po skasowaniu elementu\n");
  }

   drukuj_cala_lista();

   return 0;

}
