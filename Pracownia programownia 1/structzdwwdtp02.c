#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define n 5



struct ksiazka
{
  char imie[20];
  char nazwisko[25];
  char tytul[40];
  int rok_wydania;
  int nr_kat;
};


struct ksiazka numer[n];

int main (void)
{


   FILE *pFile;
   int i = 0;
   char temp;


   pFile = fopen("C:/bibl.txt", "r");

if(pFile != NULL)
{

   while(!feof(pFile))
   {


       fscanf(pFile,"%s",numer[i].imie);
       fscanf(pFile,"%s",numer[i].nazwisko);
       fscanf(pFile,"%s",numer[i].tytul);
       fscanf(pFile,"%d",&numer[i].rok_wydania);
       fscanf(pFile,"%d",&numer[i].nr_kat);




       i++;


        printf("\n___________________________________________\n");

    }
     SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x74 );
    printf("WPROWADZONO DANE KSIAZEK\n");






    for (i=0;i<5;i++)
    {
        SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x2f );
        printf("%s %s '%s'\n",numer[i].imie, numer[i].nazwisko, numer[i].tytul);
        SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x37 );
        printf("rok wydania:%d nr katalogowy:%d \n",numer[i].rok_wydania, numer[i].nr_kat  );
        printf("\n___________________________________________\n");
    }


    for (temp='0'; temp!='\n' ;temp=getchar());
    getchar();
}

    else
   {
    printf("could not opened the file.\n");
   }



    return 0;
}
