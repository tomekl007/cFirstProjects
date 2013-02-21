#include <stdio.h>
#include <string.h>

int main(void)
{char doc[40];
 char zr[20];
char i;






 printf("podaj dowolny napis w ktorym bedzie szukal : ");
 fgets(doc,40,stdin);
 printf("podaj znak do wyszukania : ");
 fgets(zr,2,stdin);
 i=strstr(doc,zr);
 printf("%d",&i);


 return 0;
}
