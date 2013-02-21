#include <stdio.h>
#include <conio.h>
main()
{
char a;
do
{
printf("Je¿eli chcesz wyœwietliæ ten komunikat jeszcze raz naciœnij y\n");
a=getch();
}while(a=='y');
puts("Koniec");
return 0;
}
