#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{char glad[10]={"Gladiator"};
 char inc[10]={"Incepcja"};
 char av[10]={"Avatar"};
 char gt[12]={"Gran Torino"};
 char blow[10]={"Blow"};
 char tempt[30];
 char glada[20]={"Russel Crowe"};
 char inca[20]={"Leonardo Di Caprio"};
 char ava[20]={"Sam Wortington"};
 char gta[20]={"Clint Eastwood"};
 char blowa[20]={"Johnny Depp"};
 char tempa[30];
 int a=0;
 int y;
 int i = 0;
 int b;
 poczatek:
 printf("Zgadnij tytul wybranego filmu!\n\n");
 printf("%s\n%s\n%s\n%s\n%s\n",av,blow,glad,gt,inc);
 printf("\n\nwpisz tutul jednego z wyzej wymienionych filmow:\n\n");

 gets(tempt);

//pierwszy film
 if(strcmp(glad,tempt)==0)
 {
   printf("\nWybrales film : %s",glad);


   do
   {
   printf("\nWpisz imie i nazwisko gwiazdy filmu '%s' : \n",glad);
   gets(tempa);
     if(strcmp(glada,tempa)==0)
     {
     printf("\nSwietne!! Zgadles !\n\n");
     a=0;
     b=b+1;
     for (i=0;i<=10;++i)
     {
     glad[i]=0;

     };//wykasowalem tablice glad[]
     goto poczatek;


     }
     else{
     printf("\nNiestety nie zgadles , sprobuj jeszcze raz!!\n");

     y=rand()%10;
     printf("%d litera wystepujaca w imieniu lub nazwisku gwiazdy '%s' to :  %c \n",y+1,glad,*(glada+y));
     a=a+1;}

   }while(a=1);

 }




//drugi film
 else if(strcmp(inc,tempt)==0)
 {
   printf("\nWybrales film : %s",inc);


   do
   {
   printf("\nWpisz imie i nazwisko gwiazdy filmu '%s' : \n",inc);
   gets(tempa);
     if(strcmp(inca,tempa)==0)
     {
     printf("\nSwietne!! Zgadles !\n\n");
     b=b+1;
     a=0;
     for (i=0;i<=10;++i)
     {
     inc[i]=0;

     };//wykasowalem tablice inc[]
     goto poczatek;


     }
     else{
     printf("\nNiestety nie zgadles , sprobuj jeszcze raz!!\n");

     y=rand()%10;
     printf("%d litera wystepujaca w imieniu lub nazwisku gwiazdy '%s' to :  %c \n",y+1,inc,*(inca+y));
     a=a+1;}

   }while(a=1);

 }


//trzeci film

else if(strcmp(av,tempt)==0)
{
   printf("\nWybrales film : %s",av);


   do
   {
   printf("\nWpisz imie i nazwisko gwiazdy filmu '%s' : \n",av);
   gets(tempa);
     if(strcmp(ava,tempa)==0)
     {
     printf("\nSwietne!! Zgadles !\n\n");
     b=b+1;
     a=0;
     for (i=0;i<=10;++i)
     {
     av[i]=0;

     };//wykasowalem tablice av[]
     goto poczatek;


     }
     else{
     printf("\nNiestety nie zgadles , sprobuj jeszcze raz!!\n");

     y=rand()%10;
     printf("%d litera wystepujaca w imieniu lub nazwisku gwiazdy '%s' to :  %c \n",y+1,av,*(ava+y));
     a=a+1;}

   }while(a=1);

 }
 //czwarty film
 else if(strcmp(gt,tempt)==0)
{
   printf("\nWybrales film : %s",gt);


   do
   {
   printf("\nWpisz imie i nazwisko gwiazdy filmu '%s' : \n",gt);
   gets(tempa);
     if(strcmp(gta,tempa)==0)
     {
     printf("\nSwietne!! Zgadles !\n\n");
     b=b+1;
     a=0;
     for (i=0;i<=10;++i)
     {
     gt[i]=0;

     };//wykasowalem tablice gt[]
     goto poczatek;


     }
     else{
     printf("\nNiestety nie zgadles , sprobuj jeszcze raz!!\n");

     y=rand()%10;
     printf("%d litera wystepujaca w imieniu lub nazwisku gwiazdy '%s' to :  %c \n",y+1,gt,*(gta+y));
     a=a+1;}

   }while(a=1);

 }
//piaty film
 else if(strcmp(blow,tempt)==0)
{
   printf("\nWybrales film : %s",blow);


   do
   {
   printf("\nWpisz imie i nazwisko gwiazdy filmu '%s' : \n",blow);
   gets(tempa);
     if(strcmp(blowa,tempa)==0)
     {
     printf("\nSwietne!! Zgadles !\n\n");
     b=b+1;
     a=0;
     for (i=0;i<=10;++i)
     {
     blow[i]=0;

     };//wykasowalem tablice blow[]
     goto poczatek;


     }
     else{
     printf("\nNiestety nie zgadles , sprobuj jeszcze raz!!\n");

     y=rand()%10;
     printf("%d litera wystepujaca w imieniu lub nazwisku gwiazdy '%s' to :  %c \n",y+1,blow,*(blowa+y));
     a=a+1;}

   }while(a=1);

 }


}
