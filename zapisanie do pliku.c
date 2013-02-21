#include <stdio.h>
main()
{
char tab[81];
FILE *wsk;
wsk=fopen("D:\\Zgrane\\Plik.txt","r");
fgets(tab,3,wsk);
printf("%s",tab);
fclose(wsk);
getchar();
return 0;
}
