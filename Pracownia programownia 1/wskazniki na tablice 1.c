#include <stdio.h>
#include <stdlib.h>

int main (void)
{
   int tablica[4] = { 1,2,3,4 };
   int *t,i;
   t=&tablica[0];

   printf("Elementy tablicy \n");
    for (i=0;i<4;i++)
      { printf("tablica[%d]=%d\n",i,*t);
        t++;
      }
    return 0;
}
