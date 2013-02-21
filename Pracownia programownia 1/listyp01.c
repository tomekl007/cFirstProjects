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
     struct element_listy *pom; //deklaracja wskaznika na structure

     int i=1,kolejny=1;

     pom=malloc(sizeof(struct element_listy)); //rezerwuje pamiec na ta strukture na stercie


     pom->wartosc=wartosc;//teraz pointer pom wskazuje na structure[0] wiec do wartosc jej daje wartosc przekazana przez funkcje
     if(glowa==NULL) // tworzenie g³owy isty
        {
          pom->nast=NULL; // wskaznikowi nast z struct element listy przypozadkowuje null
           glowa=pom; //teraz w glowie mam adres struct pom
           element=glowa; //pointer element ma adres glowy   we wsk element mam teraz adres tej struct[0]
        }
      else
      {
        pom->nast=NULL; // jesli pointer glowa nie jest null to pointer ze struct pom tj nast daje do niego adres null
        element->nast=pom; //nast ma adres pom
         element=pom; //element ma adres pom
      }
    return 0;
}

void drukuj_cala_lista(void)
{
  struct element_listy *pom;
  int i=1;
  pom=glowa; //pom tam gdzie wskazuje glowa tj pom[0]

  while(pom!=NULL) // tak dluga jak pointer pom nie bedzie wskazywal na null
   {
     printf("%d-element to->%d \n",i,pom->wartosc);//1 element to wartosc ze struktury pom
     pom=pom->nast; i++; } //do pom daje adres pom[1] ktory jest w *nast robi az dojdzie do ostaniego elementu listy nast = null
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

    system("pause");
    return 0;
}
