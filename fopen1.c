#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *plikwy;
int main(void)

{char nap[10];
 char odp;
 char nazwapliku[12];


 printf("podaj nazwe pliku ktory chesz stworzyc..\n");
 gets(nazwapliku);
 plikwy=fopen(nazwapliku,"w");
 do
 {printf("podaj slowo max 10 znakow:\n ");
 fgets(nap,10,stdin);
 fprintf(plikwy,"%s",nap);
 printf("czyt kolejne slowo T/N? ");
 odp=getchar();
 fflush(stdin);
 }
 while (odp=='t');
  fclose(plikwy);
  system("pause");



 return 0;
}



