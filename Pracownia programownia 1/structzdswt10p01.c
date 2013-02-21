#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 5



struct pracownik
{
  char imie[20];
  char nazwisko[20];
  int rok_zatrudnienia;
  int staz_pracy;
  int premia;
};


struct pracownik numer[n];

int main (void)
{

   int i;
   char temp;
   int rok;
   int rok_obecny = 2012;

   for (i=0;i<n;i++)
   {
      printf("Wpisz imie pracownika: ");
      scanf("%s",numer[i].imie);
      printf("\nPodaj nazwisko pracownika : ");
      scanf("%s",numer[i].nazwisko);
      printf("\npodaj rok zatrudnienia: ");
      scanf("%d",&rok);
      numer[i].rok_zatrudnienia=rok;
      numer[i].staz_pracy=rok_obecny - rok;
       if(numer[i].staz_pracy > 5)
        {numer[i].premia = 7;}
       else
        {numer[i].premia = 5;}

      printf("\n___________________________________________\n");
    }

    printf("WPROWADZONO DANE PRACOWNIKOW\n");

    for (i=0;i<4;i++)
    {
        printf("Imie: %s Nazwisko: %s staz: %d lat \n",numer[i].imie, numer[i].nazwisko, numer[i].staz_pracy);
        printf("placa : premia : %d procent do wyplaty : \n",numer[i].premia );
        printf("\n___________________________________________\n");
    }


    for (temp='0'; temp!='\n' ;temp=getchar());
    getchar();

    return 0;
}
