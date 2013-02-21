#include<stdio.h>
#include<stdlib.h>

int main(void)

{
    int a=3,b=7;
    int *pointer1,*pointer2;
    pointer1 = &a;
    pointer2 = &b;



    printf("Adres zmiennej a to: %p \n adres zmiennej b to : %p\n",pointer1,pointer2);
    if(pointer1<pointer2)
    printf("mniejsza wartosc adresu jest w zmiennej a o adresie %p\n",pointer1);
    else printf("mniejsza wartosc adresu jest w zmiennej b o adresie %p\n",pointer2);

    return 0;
}
