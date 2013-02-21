#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int a=0;
int y;
int i = 0;
int b;
char gt[12]={"Gran Torino"};
char glad[20]={"Gladiator"};
char inc[10]={"Incepcja"};
char av[10]={"Avatar"};
char tempa[30];








int main(void)


{char tempt[30];

  if (b==3)
 {
 koniec();
 }
 else {


 printf("Zgadnij tytul wybranego filmu!\n\n");
 printf("%s\n%s\n%s\n%s\n",av,glad,gt,inc);
 printf("\n\nwpisz tutul jednego z wyzej wymienionych filmow:\n\n");

 gets(tempt);


//pierwszy film
 if(strcmp(glad,tempt)==0)
 {gladiator();
  }




//drugi film
 else if(strcmp(inc,tempt)==0)
 {
     incepcja();
 }


//trzeci film

else if(strcmp(av,tempt)==0)
{
  avatar();
}


 //czwarty film
 else if(strcmp(gt,tempt)==0)
{
 grantorino();

 }
//piaty film


 }
}


int incepcja()
{char inca[20]={"Leonardo Di Caprio"};



{printf("\nWybrales film : %s",inc);


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
       return(main());


     }
     else{
     printf("\nNiestety nie zgadles , sprobuj jeszcze raz!!\n");

     y=rand()%10;
     printf("%d litera wystepujaca w imieniu lub nazwisku gwiazdy '%s' to :  %c \n",y+1,inc,*(inca+y));
     a=a+1;}
   }while(a=1);

}

}

int avatar()

{char ava[20]={"Sam Wortington"};
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
     return(main());


     }
     else{
     printf("\nNiestety nie zgadles , sprobuj jeszcze raz!!\n");

     y=rand()%10;
     printf("%d litera wystepujaca w imieniu lub nazwisku gwiazdy '%s' to :  %c \n",y+1,av,*(ava+y));
     a=a+1;}

   }while(a=1);

    }
}


 int grantorino()
 {char gta[20]={"Clint Eastwood"};






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
     return(main());


     }
     else{
     printf("\nNiestety nie zgadles , sprobuj jeszcze raz!!\n");

     y=rand()%10;
     printf("%d litera wystepujaca w imieniu lub nazwisku gwiazdy '%s' to :  %c \n",y+1,gt,*(gta+y));
     a=a+1;}

   }while(a=1);

 }

 }



 int gladiator()


 {char glada[20]={"Russel Crowe"};


    {

     printf("\nWybrales film : %s",glad);


   do
   {
   printf("\nWpisz imie i nazwisko gwiazdy filmu '%s' : \n",glad);
   gets(tempa);
     if(strcmp(glada,tempa)==0)
     {
     printf("\nSwietne!! Zgadles !\n\n");
     b=b+1;
     a=0;
     for (i=0;i<=10;++i)
     {
     glad[i]=0;

     };//wykasowalem tablice gt[]
     return(main());


     }
     else{
     printf("\nNiestety nie zgadles , sprobuj jeszcze raz!!\n");

     y=rand()%10;
     printf("%d litera wystepujaca w imieniu lub nazwisku gwiazdy '%s' to :  %c \n",y+1,glad,*(glada+y));
     a=a+1;}

   }while(a=1);

    }

 }


int koniec()

{

 char imie[15];
 char nazwisko[20];
 char nazwapl[]={"wygrales.txt"};
 FILE *plik;
 {printf("\n\n-------------------------GRATUALCJE !! PRZESZLES GRE !!-------------------------- \n\n\n");
   plik = fopen(nazwapl, "w" );
   printf("podaj swoje Imie zwyciesco :  ");
   fgets(imie,15,stdin);
   printf("i Nazwisko :  ");
   fgets(nazwisko,20,stdin); //it reads from standard intput, but it can be use to read from file fgets(nazwisko,20,pFile)
   strcat(imie,nazwisko);

   fprintf(plik,"Przeszles gre :\n\n%s \n Ten plik jest tego dowodem ! Zachowaj go !!",imie);
   printf("/n/ndowod przejscia tej gry przez Ciebie\nzostal zapisany na dysku w postaci dokumentu tekstowego\nw domyslnej lokalizacji\n\n\n");


 }
   return 0;
}


