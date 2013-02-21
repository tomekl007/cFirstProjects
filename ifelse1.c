#include <stdio.h>
main()
{
int liczba;
printf("Je¿eli wpiszesz 2,4,6 albo 7 do zobaczysz odpowiedni komunikat.\n");
scanf("%d",&liczba);
if(liczba==2)
printf("Poda³eœ 2");
else if(liczba==4)
printf("Poda³eœ 4");
else if(liczba==6)
printf("Poda³eœ 6");
else if(liczba==7)
printf("Poda³eœ 7");
else
printf("Nie wpisa³eœ ani 2 ani 4 ani 6 ani nawet 7");
return 0;
}
