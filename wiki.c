#include <stdio.h>
#include <string.h>

int main()
{
    char str[30] = "Ala ";   // kopiujemy napis do tablicy
    char *strFrom = "ma kota";   // zapisujemy wskaznik na napis

    strcat (str, strFrom);
    puts(str);
    return 0;
}
