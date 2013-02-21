#include <stdio.h>
#include <stdlib.h>
int main (void)
{
 int calkowite[4] = { 1,2,3,4 }; //elementy tablicy int deklaruj bez "  " !!
 int *t,i;
 t=&calkowite[4];

 printf("Elementy tablicy \n");
    for (i=4;i>=0;i--)
      { printf("tablica[%d]=%d\n",i,*t);
        t--;
      }
 return 0; }
