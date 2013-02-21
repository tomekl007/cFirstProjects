#include <stdio.h>
#define PI 3.14
main()
{
int r;
float pole;
puts("Podaj d³ugoœæ promienia:");
scanf("%d",&r);
pole=PI*r*r;
printf("Pole ko³a o promieniu %d wynosi %f\n",r,pole);
return 0;
}
