#include <stdio.h>
#include <math.h>

main()
{
int a=0;
int n;
int i=0;
int tablica[19]={0};
int suma=0;
int srednia;



while (i<=19)
{
printf("podaj %d liczbe calkowita :\n",i+1 );
scanf("%d",&tablica[i]);
++i;

}
 printf("obliczyc srednia i sume ilu liczb? :\n");
 scanf("%d",&n);

 while (a+1<=n)
 {
 suma=suma+tablica[a];
 a=a+1;

 }

 srednia=suma/n;


 printf("suma %d liczb calkowitych to : %d\n a srednia tych liczb to %d:",n,suma,srednia);
 return 0;
}











