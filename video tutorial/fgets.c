#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>




int main()
{


  FILE *pFile;
  char line[81];
  int i;

  pFile = fopen("C:/data.txt", "r");


   if(pFile != NULL)
   {
      while(!feof(pFile))  //Funkcja zwraca wartoœæ niezerow¹ je¿eli napotka koniec pliku tekstowego. Read until we get endof file. Keep reading as long as there is data to read.
      {
        fgets(line, 81, pFile); // this function read only strings, that mean if they are int, they will be read as strings(in ASCII). In this ex kepp 80bytes and on 81byte store "\n". Read until reach "/n" - it stops.
        printf("%s",line);
      }







    fclose(pFile);

   }

   else
   {
    printf("could not opened the file.\n");
   }








return 0;
}
