#include <stdio.h>
#include <stdlib.h>

struct element_listy

{
  int wartosc;
  struct element_listy *nast,*pop;
}

*glowa=NULL,*element,*koniec=NULL ;

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

void drukuj_cala_lista(void)

{
  struct element_listy *pom;
  int i=1; pom=glowa;

  while(pom!=NULL)
  {
   printf("%d-element to->%d \n",i,pom->wartosc);
   pom=pom->nast; i++;
  }
}



int main(void)

{

  int i=1,kolejny=1,wartosc;

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

   return 0;
}
