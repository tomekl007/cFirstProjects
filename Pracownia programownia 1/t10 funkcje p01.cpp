#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int srednia(int tab [][10], int rozm)
{
    int wynik;
    int ilosc;
    float sred;

    for (int i=0;i<rozm;i++)
   {
      for (int j=0;j<rozm;j++)
    {
     wynik += tab[i][j];


    }
     ilosc = rozm * 10;
     sred =(float) wynik / (float)ilosc ; //przed dzieleniem !konwertuj! int na float w ten sposob (float)ilosc
   }
printf("srednia z tych liczb to %.2f    ilosc%d  suma %d \n",sred , ilosc ,wynik );




}

int wyswtab (int tab [][10], int rozm) //ta funckja tylko wyswieli ta tablice
{
  printf("Wygenerowana tablica. \n");
  for (int i=0;i<rozm;i++)
   {
      for (int j=0;j<rozm;j++)
    {
     printf("%3d ", tab[i][j]);  //%3d znaczy ze liczba bedzie wyswietlona na 3 polach, jesli liczba 3 bedzie dluzsza niz parametr to zostanie ona zignorowana
    }
    printf("\n");
   }

 return 0;
}


int sortowanie(int tablica [][10], int rozm)
  {



        int wiersz;
        int temp = 0;
        int zmiana = 0;
        int i = 0;


        printf("ktory wiersz tablicy chcesz posortowac? : \n");
        scanf("%d",&wiersz);
       if(wiersz <10)
       {


        do
        {
                zmiana=0;
                i=rozm-1;
                   do
                {
                        i--;
                        if (tablica[wiersz][i+1]< tablica[wiersz][i])
                      {
                                temp=tablica[wiersz][i];
                                tablica[wiersz][i]=tablica[wiersz][i+1];
                                tablica[wiersz][i+1]=temp;



                                zmiana=1;
                        }
                }
                while (i!=0);
        }
        while (zmiana!=0);


  printf("Wygenerowana tablica. \n");

             for (int i=0;i<rozm;i++)
        {
           for (int j=0;j<rozm;j++)
        {
          printf("%3d ", tablica[i][j]);
        }
     printf("\n");

   }


       }

       else
       printf("tablica nie ma tylu wierszy\n ");



  }




main()
{
  srand ( time(NULL) );
  int tablica [10][10];


  for (int i=0;i<10;i++)
   {
      for (int j=0;j<10;j++)
      {
        tablica[i][j]=rand()%10+1;
      }
   }

  wyswtab(tablica,10); // w tym momecie tablica jest juz zapelniona losowymi liczbami
  srednia(tablica,10);
  sortowanie(tablica,10);
}



