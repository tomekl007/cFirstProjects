#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
  int i;
  char c[2];
  char *tablica[10][2] = {
        "0", "zero",
        "1","jeden",
        "2","dwa",
        "3","trzy",
        "4","cztery",
        "5","piec",
        "6","szesc",
        "7","siedem",
        "8","osiem",
        "9","dziewiec" };

  printf("Podaj cyfre ");
  scanf("%s",c);
    for (i=0;i<10;i++)
     if (strcmp(c,tablica[i][0]) == 0)
       {
       printf("%s",tablica[i][1]);
       break;
       }
     if (i>9)
       printf("Nie podales cyfry");

  printf("\n");
  return 0;
}
