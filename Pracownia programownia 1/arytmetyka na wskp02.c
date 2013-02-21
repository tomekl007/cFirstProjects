#include<stdio.h>
#include<stdlib.h>

int main(void)

{
    int a=3,b=7,*do_a,*do_b;
    do_a=&a;
    do_b=&b;

    printf("Adres zmiennej a->%p | adres zmiennej b-> %\p\n",do_a,do_b);
    if(do_a<do_b) //porownanie dwoch adresow przechowywanych w *do_a i *do_b
    printf("mniejsza wartosc adresu jest w zmiennej a o adresie %p\n",do_a);
    else printf("mniejsza wartosc adresu jest w zmiennej b o adresie %p\n",do_b);

    return 0;
}
