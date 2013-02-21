#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>




int main()
{


  FILE *pFile;
  char line[21];
  char *buffer;//it will be pointing to start of buffer
  char *ptr;

  buffer = malloc(1000*sizeof(char)); //memory allocate 1000 * sizeof char - in this case size of char i 1 byte so 1000*1 it still 1000. Malloc gives addres of first byte of "array", which Windows find place for it somewhere on hype
  memset (buffer, 0, 1000*sizeof(char)); //initialized all buffer by "0"
  ptr = buffer;




  pFile = fopen("C:/deletedata.txt", "r");


   if(pFile != NULL) //jesli otwarlem plik to:
   {
      while(!feof(pFile))  //Funkcja zwraca wartoœæ niezerow¹ je¿eli napotka koniec pliku tekstowego. Read until we get endof file. Keep reading as long as there is data to read.
      {
          fgets(line,21,pFile);

             if(strcmp(line,"Michal\n")!=0) //fgets read Joe/n so you can`t compare to "Joe", but "Joe\n",
                                         //strcmp return "0" if true, non zero if false. They not the same.

             {

                 strcpy(ptr,line);     //copy line to where ptr point ,now point ot begin of buffer
                 ptr += strlen(line);  // same as ptr = ptr + strlen(line)    Adding to ptr length of line, so now ptr point after first line, and so one.

             }
       }

      fclose(pFile);// close file, because is in "read" mode


    pFile = fopen("C:/deletedata.txt", "w");  // open this file in "write" mode
    fprintf(pFile, "%s", buffer); // it print from buffer until finde "0", we inicialized all buffer by "0", so it will be print all text and finde "0", and end of print.
    fclose(pFile); //close file
   }

   else //jesli nie udalo mi sie otworzyc pliku to
   {
    printf("could not opened the file.\n");
   }








return 0;
}
