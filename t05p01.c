//Wyswietla znak i jego kod ASCII
//Dominik £uczak
//25.12.2007
/////////////////////////////////////////////////
#include <stdio.h>
#include <conio.h>
main()
{
for (int ile=0;ile<256;ile++)
   {
   printf("\n: %d znak: %c", ile, ile);
   }
printf("\nWcisni klawisz aby zakonczyc");
getch();
return 0;
}
