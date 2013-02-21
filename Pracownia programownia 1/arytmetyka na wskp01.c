#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (void)
{

   int *c,calkowita;
   char *z,znak;
   float *r,rzeczywista;

   c=&calkowita;
   z=&znak;
   r=&rzeczywista;
   printf("Adres dla zmiennej znak %p\n",z);
   printf("Adres dla zmiennej liczba calkowita%p\n",c);
   printf("Adres dla zmiennej liczba rzeczywista %p\n",r);
   z++;  // adres zmieni sie o 1 bajt bo char - 1B
   c++;  // adres zmieni sie o 4 bajty bo intiger w arch. 32 bitowej to 4B
   r++;  // tak samo jak wyzej zmini sie o 4 bo float w arch 32b to 4B
   printf("Wartoœci po operacji\n");
   printf("Adres dla zmiennej znak %p\n",z);
   printf("Adres dla zmiennej liczba calkowita%p\n",c);
   printf("Adres dla zmiennej liczba rzeczywista %p\n",r);
   return 0;
}
