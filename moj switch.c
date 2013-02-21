#include <stdio.h>
main()

{
signed int liczba;
printf("je¿eli wpiszesz -1,-2 lub 2 zobaczysz odpowiedni komunikat.\n");
scanf("%d",&liczba);
switch(liczba)
{
    case -1 : printf("poda³es liczbe ujemna");
    break;
    case -2 : printf("podales liczbe ujemna");
    break;
    case 2 : printf("podales liczbe dodatnia");
    break;
    default:
    printf("nie poda³es zadnej liczby z wyzej wymienionych");
}
return 0;
}



