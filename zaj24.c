#include <stdio.h>

int main(void)
{char napis[10];
 char *wsk;
 wsk=&napis[0];
 printf("podaj dowolny napis : ");
 fgets(napis,10,stdin);
 printf ("ten napis to : %s adres : %d adres konca : %d\n"  ,napis,&napis[0],&napis[9]);
 printf ("warosc wskaznika %d to %d",&napis[4],*(napis+4));
 return 0;
}
