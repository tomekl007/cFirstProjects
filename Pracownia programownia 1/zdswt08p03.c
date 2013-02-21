#include <stdio.h>
#include <stdlib.h>
int main (void)
{
 char *tabwsk[] = {"zero",
                    "jeden",
                    "dwa",
                    "trzy"
                    };
 char c[2];
 int i;



 for (i=0;i<4;i++)
 { printf ("wprowadz %d zmienna : \n",i);
   scanf("%s",c);
   *tabwsk[i]=c;
   printf("adres : %p wartosc : %s",tabwsk[i],*tabwsk[i]);
 }

 return 0; }
