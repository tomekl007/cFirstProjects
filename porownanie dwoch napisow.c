#include <stdio.h>
#include <string.h>

int main(void)
{char fi[20];
 char se[10];
 unsigned char por;
 int i;
 int dlfi;
 int dlse;


 printf("podaj dowolny napis zrodlowy : ");
 fgets(fi,10,stdin);
 printf("podaj napis ktory bedzie dolaczony do napisu zrodlowego: ");
 fgets(se,10,stdin);
 printf("ile liter z napisu drugiego chcesz dolaczyc do zrodlowego ? : ");
 scanf("%d",&i);
 dlfi=strlen(fi);
 dlse=strlen(se);
 printf( "%d  %d \n",dlfi,dlse);

 if (dlfi+dlse<=20)
 strncat (fi, se, i);

 else if(dlfi>10 || dlse>10)
 printf("za duzo znakow");

 puts(fi);

 return 0;
}
