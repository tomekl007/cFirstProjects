#include <stdio.h>

main()
{
    int liczba=90;
    int *wskaznik=&liczba;
    printf("zmienna znajduje sie pod adresem: %p, i przechowuje wartosc: %d\n",
    (void*)&liczba, liczba);
    printf("adres zapisany we wskazniku: %d i jego warosc: %d\n",(void*)wskaznik,*wskaznik);

    *wskaznik = 42;
    printf("warosc zmiennej: %d,wartosc wskazywana przez wskaznik: %d\n",liczba,*wskaznik);

    liczba=0x42;
    printf("wartosc zmiennej : %d , wartosc wskazywana przez wskaznik %d\n",liczba,*wskaznik);


    return 0;

}
