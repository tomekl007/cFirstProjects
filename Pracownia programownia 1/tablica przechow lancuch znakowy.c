#include <stdio.h>
#include <stdlib.h>
int main (void)
{
 char *tablica[4] = {"tablica","lancuchow","znakowych","\0"};
 int i;

 printf("Wartosci z tablicy:\n");
 for (i=0;*tablica[i];i++)
   { printf("%s ",tablica[i]); }
 printf("\n");

 return 0; }
