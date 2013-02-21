#include <stdio.h>
main()
{
FILE *wsk;
char zm;
wsk=fopen("D:\\Zgrane\\Plik.txt","w");
for(;;)
{
zm=getchar();
if(zm==32) break;
fputc(zm,wsk);
printf("%c",zm);
}
fclose(wsk);
return 0;
}
