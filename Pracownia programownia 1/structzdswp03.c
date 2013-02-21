#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 2





struct dane
{

  char imie[20];
  char nazwisko[20];
  int wiek;
};


struct dane numer[max];






int usuwanie()
{
    int wybor = 0;

    printf("z ktorej tablicy chesz usunac elementy? (0-5)");
    scanf("%d",&wybor);


   memset (numer[wybor].imie, 0, sizeof(struct dane));

/*     numer[wybor].imie = 0;
     numer[wybor].nazwisko = 0;
     numer[wybor].wiek = 0;
*/


}

int modyfikowanie()
{
    int wybor = 0;
    char temp[20];
    char imie[20]={"imie"};
    char nazwisko[20]={"nazwisko"};
    char wiek[20]={"wiek"};


    printf("w ktorej tablicy chesz zmodyfikowac element? (0-5)");
    scanf("%d",&wybor);
    printf("krory element chcesz zmodyfikowac ? (imie/nazwisko/wiek)");
    scanf("%s",temp);
     if(strcmp(imie,temp)==0)
     {
         printf("obecnie ten element to : %s, chcesz go zmodyfikowac na :\n",numer[wybor].imie);
         scanf("%s",numer[wybor].imie);


     }
     else if(strcmp(nazwisko,temp)==0)
     {
         printf("obecnie ten element to : %s, chcesz go zmodyfikowac na :\n",numer[wybor].nazwisko);
         scanf("%s",numer[wybor].nazwisko);


     }
     else if(strcmp(wiek,temp)==0)
     {
          printf("obecnie ten element to : %d, chcesz go zmodyfikowac na :\n",numer[wybor].wiek);
         scanf("%d",&numer[wybor].wiek);


     }








}


int main (void)
{

   int i;
   char temp;
   float cena;
   char tempa[10];
   char tak[10]={"t"};

   for (i=0;i<max;i++)
   {
      printf("Wpisz ime: ");
      scanf("%s",numer[i].imie);
      printf("Wpisz nazwisko: ");
      scanf("%s",numer[i].nazwisko);
      printf("\nwpisz wiek: ");
      scanf("%d",&(numer[i].wiek));
      printf("\n___________________________________________\n");
    }

    printf("WPROWADZONO DANE\n");


    printf("czy chcesz usunac element ktorejs z tablic?: t/n\n");
    scanf("%s",tempa);
    if(strcmp(tak,tempa)==0)
       {
         usuwanie();
       }


    printf("czy chcesz zmodyfikowac element ktorejs z tablic?: t/n\n");
    scanf("%s",tempa);
    if(strcmp(tak,tempa)==0)
       {
         modyfikowanie();
       }


    for (i=0;i<4;i++)
    {
        printf("imie: %s ",numer[i].imie);
        printf("nazwisko: %s ",numer[i].nazwisko);
        printf("wiek: %d ",numer[i].wiek);


        printf("\n___________________________________________\n");
    }


    for (temp='0'; temp!='\n' ;temp=getchar());
    getchar();

    return 0;
}
