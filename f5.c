#include <stdio.h>
int main()
{
int funkcja();
int a;

puts("Podaj dowoln¹ liczbê:");
scanf("%d",&a);
funkcja();
printf("Pierwsza podan liczba to %d",a);
return 0;
}
int funkcja()
{
int a;
puts("Podaj drug¹ liczbê:");
scanf("%d",&a);
printf("Jako drug¹ poda³eœ %d",a);
return 0;
}
