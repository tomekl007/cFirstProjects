#include <stdio.h>
#include <stdlib.h>

int szukajmin(int*tab,int n)
{
    int min = 0;

    min=tab[0];
      for(int i=0; i<n; i++)
      {


                        if(tab[i]<min) min=tab[i];

      }

      for(int j=0; j<n; j++)
      {


                        if(tab[j]==min)
                        {
                                           printf("\n najmniejszy element to tab[%d]=%d", j,tab[j]);
                        }



      }






}




int main (void)
{
  int i, rozmiar_tablicy = 0;
  int *tab;
  int *tab2;


  printf("Podaj, ile elementow chcesz utworzyc: \n");
  scanf("%d", &rozmiar_tablicy);
  tab = (int*)malloc(rozmiar_tablicy * sizeof *tab);
  tab2 = (int*)malloc(rozmiar_tablicy * sizeof *tab);

   for(i = 0; i < rozmiar_tablicy; i++ )
 {
   tab[i] = rand()%100 ;

 }

   for(int a = 0; a < rozmiar_tablicy; a++ )
 {
   tab2[a] = rand()%100 ;

 }
  for(i=0;i<rozmiar_tablicy;i++)
  {
    printf("tab[%d]=%d tab[%d]=%d\n ",i,tab[i],i,tab2[i]);

  }

   szukajmin(tab,rozmiar_tablicy);

  free(tab);

  return 0;
}
