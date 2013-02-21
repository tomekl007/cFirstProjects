#include <stdio.h>
#include <conio.h>

double sum1(double x, double y)
{
   return x + y;
}

void sum2(double x, double y, double * z)
{
*z = x + y;
}

void sum3(double x, double y, double &z)
{
 z = x + y;
}


int main()
{
  double x,y,z;
  double * v;
  v=&z;

  printf("\nPodaj liczby ktore chcesz zsumowac: ");
  scanf("%lf", &x);
  scanf("%lf", &y);
  z= sum1(x, y);
  printf("Suma podanych przez ciebie liczb wyliczona metoda pierwsza wynosi: %lf\n", z);
  sum2(x, y, v);
  printf("Suma podanych przez ciebie liczb wyliczona metoda druga wynosi: %lf\n", *v);
  sum3(x, y, z);
  printf("Suma podanych przez ciebie liczba wyliczona metoda pierwsza wynosi: %lf\n", z);
  return 0;
}


