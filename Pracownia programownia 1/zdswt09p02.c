#include <stdio.h>
#include <stdlib.h>




int main (void)
{   int i,rozmiar_tablicy=0;
    int *tab;
    int *pointer;
    int *pointer2[10];


    printf("ile elementow ma miec tablica liczb calkowitych?:\n");
    scanf("%d",&rozmiar_tablicy);

    tab = (int*)malloc(rozmiar_tablicy * sizeof *tab);
    pointer = (int*)malloc(rozmiar_tablicy * sizeof *tab);

    for(i=0;i<rozmiar_tablicy;i++)
    { tab[i]=rand()%100;}

    for(i=0;i<rozmiar_tablicy;i++)
    {


      if(*(tab)<*(tab+i))
       {
         pointer[i]=tab[i];


          printf("wieksza jest liczba %d\n",pointer[i]);
       }
            }


       /* for(i=0;i<rozmiar_tablicy/2;i++){
             if(*(pointer)<*(pointer+i))
        {
              pointer2[i]=pointer[i];

            printf("wieksza jest liczba %d\n",pointer2[i]);
        }

}

*/



    for(i=0;i<rozmiar_tablicy;i++)
    { printf("tab[%d]=%d\n",i,tab[i]); }
    free(tab);





    return 0;
}
