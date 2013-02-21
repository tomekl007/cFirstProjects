#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *plikwejscia;
struct dzialania
  {
   char liczba1[2],liczba2[2];
   char wynik[4];
   char znak;
   };

int main (void)
{
   struct dzialania *t;
   int i=0,rozmiar_tablicy=1,wynik;
   char alert[5]="BLAD";
   t = (struct dzialania *)malloc(rozmiar_tablicy * sizeof(*t));
   plikwejscia=fopen("C:\\in.txt", "r");

   if (plikwejscia==NULL)
   {
   printf("Plik nie istnieje.\n"); }

   else { while (!feof(plikwejscia))
   {
      fscanf(plikwejscia,"%s",t[i].liczba1); //skanuje plik wejsciowy i daje wartosc z pierwszej linijki do structury dzialania t[1] liczby1
      getc(plikwejscia); //szuka znaku
      fscanf(plikwejscia,"%s",t[i].liczba2);
      getc(plikwejscia); //szuka znaku
      t[i].znak=getc(plikwejscia);
      getc(plikwejscia); // szuka znaku

         if (t[i].znak=='+')
         {
          wynik=atoi(t[i].liczba1)+atoi(t[i].liczba2); //atoi pobiera !liczbe! w postaci ciagu ASCII, i zwraca jej wartosc w formie int,liczbe moga poprzedzac biale znaki(spacje,..) a takze ("+""-",..) konczy wczystywac gdy napotka znak nie bedacy cyfra

          itoa(wynik,t[i].wynik,10); //  jako arg pobiera wynik, konwertuje w systemie "dec-10" do t[i].wynik
         }


         else
         {
          if (t[i].znak=='-')
            {
              wynik=atoi(t[i].liczba1)-atoi(t[i].liczba2);
              itoa(wynik,t[i].wynik,10);
             }
          else strcpy(t[i].wynik,alert); //compiuje do wynik, alert
          }
     rozmiar_tablicy++;
     t=(struct dzialania *)realloc(t,rozmiar_tablicy*sizeof *t); // zmienia rozmiar obiektu t na ,rozmiar_tablicy*sizeof *t
     i++;
    }//koniec petli while (!feof(plikwejscia))

          for(i=0;i<rozmiar_tablicy-1;i++)
          {
            printf("%s%c%s=%s\n",t[i].liczba1,t[i].znak,t[i].liczba2,t[i].wynik); }
            free(t);
           } // koniec warunku if (plikwejscia==NULL)

    return 0;
}

