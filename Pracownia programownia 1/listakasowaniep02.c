#include <stdio.h>
#include <stdlib.h>

struct element_listy
{
   int wartosc;
   struct element_listy *nast;
}

*glowa=NULL,*element ;

struct wsk_element_listy
 {
   struct element_listy *wsk;
   int czy_pierwszy;
  };


int dodaj_nowy_element(int wartosc) //funkcja dodajaca jeden element do listy
{
  struct element_listy *pom;
  int i=1,kolejny=1;

  pom=malloc(sizeof(struct element_listy));

  pom->wartosc=wartosc;

  if(glowa==NULL) // tworzenie g³owy isty
  {
     pom->nast=NULL;
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


struct wsk_element_listy szukaj_do_kasowania(int szukana_wartosc)

{
 struct element_listy *pom,*pom1;
 struct wsk_element_listy res;
 pom=glowa;

 if(pom->wartosc==szukana_wartosc)
  {
    res.wsk=pom;
    res.czy_pierwszy=1;
    return res;
  }
  else
  {
      pom1=pom;
      pom=pom->nast;
      while(pom!=NULL)
        {
         if(pom->wartosc==szukana_wartosc)
           {
             res.wsk=pom1;
             res.czy_pierwszy=0;
             return res;
            }
        pom=pom->nast;
        pom1=pom1->nast;
    }
    res.wsk=NULL;
    res.czy_pierwszy=1;
    return res;
   }
}


void kasuj_element (struct wsk_element_listy element_wybrany) // element-wybrany to struct res

{
  struct element_listy *pom;

  if(element_wybrany.czy_pierwszy==1)
  {
     pom=glowa;
     glowa=glowa->nast;
  }

  else
  {
      pom=(*element_wybrany.wsk).nast;        //pom[0] dalem do pom[1]
      (*element_wybrany.wsk).nast=(*(*element_wybrany.wsk).nast).nast; // a ten *nast ktoru pokazywal na pom[1], teraz bedzie pokazywal na pom[2]
  }

  free(pom);
}


void drukuj_cala_lista(void)

{
   struct element_listy *pom;
   int i=1;
   pom=glowa;

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
   printf("Podaj wartosc elementu ktory chesz skasowac ");
   scanf("%d",&wartosc);

   if (szukaj_do_kasowania(wartosc).wsk==NULL)
    printf("Nie ma takiego elementu\n");

   else
   {
      kasuj_element(szukaj_do_kasowania(wartosc));
      printf("Lista po skasowaniu elementu\n");
      drukuj_cala_lista();
    }

    system("pause");

    return 0;
}



