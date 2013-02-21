#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{   int i,rozmiar_tablicy=100;
    char *tab;
    char koniec[]={"KONIEC"};
    char temp[20];
    int c = 0;
    int dl;
    tab = (char*)malloc(rozmiar_tablicy * sizeof *tab);

    do
    {




    printf("\nwpisz %d lancuch znakowy:  \n",c);
    gets(temp);

      if (strcmp(temp,koniec)!=0)
      {strcpy(&tab[c],temp);}
      dl= strlen(temp);
      c += dl;


    }while(strcmp(temp,koniec)!=0);





    for(i=100;i>=0;i--)
    { printf("tab[%d]=%s\n",i,&tab[i]); }
    free(tab);

    return 0;
}
