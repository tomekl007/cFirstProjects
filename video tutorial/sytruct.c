#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
struct film
{
    int rokprod;
    int ocena;
    char tytul[20];

};




struct film avatar;

avatar.rokprod = 2010;
avatar.ocena = 9;
strcpy(avatar.tytul, "Avatar");

printf("d",avatar.rokprod);

return 0;
}
