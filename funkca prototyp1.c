#include <stdio.h>
 int main()
{    int funkcja();
     int l;
     int nie2();
printf("nacisnij '2' a zobaczysz funkcje");
scanf("%d",&l);
if(l==2)
funkcja();
else if(l==3)
nie2();
else
printf("wpisales zla liczbe");
return 0;
}
int funkcja()
{
puts("To jest tekst z funkcji");
return 0;
}
int nie2()
{
    puts("nie wcisles '2'a '3'");
    return 0;
}
