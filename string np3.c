#include <stdio.h>
#include <string.h>

int main(void)
{char doc[40];
 char zr[20];
 char buf[10];

 char i;
 char *wsk;



 printf("podaj dowolny napis docelowy : ");
 fgets(doc,40,stdin);
 printf("podaj dowolny napis zrodlowy : ");
 fgets(zr,20,stdin);
 printf("od korej litery chesz rozpoczac kopiowanie do zrodlowego ? : ");
 scanf("%d",&i);
 *buf=*(zr+i);

 printf("%d",*(zr+i));
 printf("%d",*wsk);

 return 0;
}
