#include <stdio.h>
#include <stdlib.h>

int main (void)
{
int **c1,*c,calkowita;



calkowita=5;
c=&calkowita; // w c jest teraz adres calkowitej
c1=&c; // do c1 dajemy adres ktory jest w c ( czyli adres do calkowitej jest w c i w c1)
printf("Wartoœæ zmiennej calkowita-->%d\n",calkowita);
printf("wartoœæ zmiennej wskazywanej przez c1-->%d\n",**c1);

return 0; }
