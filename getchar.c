#include <stdio.h>
main()
{ int funkcja();
puts("Naciœnij dowolny przycisk a zobaczysz wynik wykonania instrukcji zawartych w stworzonej przeze mnie funkcji o nazwie 'funkcja'");
getchar();
funkcja();
return 0;
}
int funkcja()
{
puts("To jest tekst z funkcji");
return 0;
}

