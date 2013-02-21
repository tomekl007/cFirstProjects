#include <stdio.h>
#include <string.h>

int main()
{
 char napis[30]="operacje ";
 char *a="na ";
 char *b="lancuchach ";
 char *c="znakowych";
 strcat(napis,a);
 strcat(napis,b);
 strcat(napis,c);
 puts(napis);
 return 0;
}

