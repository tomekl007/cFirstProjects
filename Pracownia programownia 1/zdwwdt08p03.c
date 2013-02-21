#include <stdio.h>
#include <stdlib.h>
int main (void)
{
 char *tabwsk[4]= {"tablica","lancuchow","znakowych","wdads"};
 char c[2];
 int i = 0;



 for (i=0;i<4;i++)
 { printf ("wprowadz %d zmienna : \n",i);
   scanf("%s",c);
   tabwsk[i]=&c; // do adresu tablicy przyporzadkowuje adres c
   printf("wartosc tablicy tabwsk[%d] to %c : a adres to : %p\n",i, *tabwsk[i], &tabwsk[i]); // *tabwsk[0]- wartosc tablicy na ktora wskazuje adres znajdujacy sie w tabwsk[0]
}

 return 0; }
