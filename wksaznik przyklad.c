#include <stdio.h>
#include <string.h>

int main(void)
{char napis[10];
 char *wsk;
 wsk=&napis[0];
 int i = 0;
 int dlugosc;
 printf("podaj dowolny napis : ");
 fgets(napis,10,stdin);
 printf ("ten napis to : %s adres : %d adres konca : %d\n"  ,napis,&napis[0],&napis[9]);
 printf ("warosc wskaznika %d to %d\n",&napis[4],*(napis+4));
 dlugosc=strlen(napis);
 printf("napis skalda sie z %d znakow \n",dlugosc);

 for (i=0;i<=10;++i)
 {
     napis[i]=0;
 };
 printf("bufor klawiatury :  %s ",napis);



 return 0;
}

