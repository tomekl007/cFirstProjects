#include <stdio.h>
#include <stdlib.h>

int main (void)
{
   float rzeczyw[4];
   float *pointer;
   pointer=&rzeczyw[0];
   pointer += 4;//do adresu ktory wskazuje pointer dodaje 4
   printf("adres ostatniego elementu tablicy liczb rzeczywistych to: %p",pointer);


   return 0;
}

