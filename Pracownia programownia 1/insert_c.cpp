/*
Sortpwanie liczb calkowitych metoda InsertionSort
Program zostal pobrany ze strony www.algorytm.org
Opracowal Michal Knasiecki
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void insertionsort(int tablica[10], int ile_liczb)
{
int i,j,v;
for (i=1;i<ile_liczb;i++)
	{
   j=i;
   v=tablica[i];
   	while ((tablica[j-1]>v)&&(j>0))
      	{
         tablica[j]=tablica[j-1];
         j--;
         }
      tablica[j]=v;
   }
printf("\nTablica po posortowaniu:");
   for(i=0; i<ile_liczb; i++) printf("\n%i",tablica[i]);
}
int main(void)
{
int ile_liczb,i,liczba;
int tablica[10];

printf("Ile liczb chesz posortowac (do 10) ? ");
scanf("%i",&ile_liczb);
for(i=0; i<ile_liczb; i++)
  	{
   printf("Wprowadz liczbe #%i: ",i+1);
   scanf("%i",&liczba);
   tablica[i]=liczba;
   }

printf("Tablica przed posortowaniem:");
   for(i=0; i<ile_liczb; i++) printf("\n%i",tablica[i]);
insertionsort(tablica,ile_liczb);
printf("\nDowolny klawisz...");
getch();
return 0;
}
