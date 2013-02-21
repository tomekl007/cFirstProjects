#include <stdio.h>
#include <stdlib.h>

int main (void)
{  int tablica[3][3] ={ 11,12,13,
                        23,24,55,
                        33,34,35 };


   int *t,i,j,pom;
   t=&tablica[0][0];

   printf("Elementy tablicy\n");
     for (i=0;i<3;i++)
         { for (j=0;j<3;j++)
             { pom=i*3+j; // 0*3+0
               printf("\ttablica[%d][%d]=%d",i,j,*(t+pom)); //tablica[0][0] = wartosc t + 0 0
             }
           printf("\n");
          }

     return 0;
}
