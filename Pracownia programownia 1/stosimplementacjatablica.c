#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STOS_MAX 10 // stos 10-elementowy
int stos[STOS_MAX];

int wierzcholek=-1;

void wstaw_na_stos(int element)
{
 if(wierzcholek < STOS_MAX)
  {
   stos[wierzcholek] = element;
   wierzcholek++;
  }
  else
  {
    printf("STOS PELNY");
  }
 }

 int zdejm_ze_stosu_jeden_element(void)
 {
  if(wierzcholek!= 0)
   {
     wierzcholek--;
     return stos[wierzcholek];
    }

   else
   {
   printf("STOS JEST PUSTY!!!!\n");
   return -1;
   }
}

void drukuj_stos(void)
{
 int i=wierzcholek-1;

   if (zdejm_ze_stosu_jeden_element()==-1)
   printf("STOS JEST PUSTY!!!!\n");

   else
   {
      while(i>=0)
      {
        printf("\t%d\n",stos[i]);
        i--;
       }
    }
 }


 int main(void)
 {
   int odpowiedz=0,wartosc;
   wierzcholek=0;

   while (odpowiedz!=4)
   {
    printf("WYBIERZ OPCJE: \n");
    printf("1-dodaj element \n");
    printf("2-usun element \n");
    printf("3-drukuj stos \n");
    printf("4-zakoncz \n");
    scanf("%d",&odpowiedz);

    switch (odpowiedz)
    { case 1:
      {
       printf("Podaj wartosc \n");
       scanf("%d",&wartosc);
       wstaw_na_stos(wartosc);
       break;
      }

      case 2:
      {
       zdejm_ze_stosu_jeden_element();
       break;
      }

      case 3:
      {
       drukuj_stos();
       break;
       }
      }

    }
 return 0;

}
