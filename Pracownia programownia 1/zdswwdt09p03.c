#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>




int main()
{
  int len;
  char *rzeczywiste;
  char *ptr;
  char line[10];
  int rozmiar_tablicy=100;
  FILE *pFile;
  int i = 0;
  int *buffer;
  int *ptr2;
  int liczba;

  rzeczywiste = (char*)malloc(rozmiar_tablicy * sizeof *rzeczywiste);
  memset (rzeczywiste, 0, rozmiar_tablicy*sizeof(char));
  ptr = rzeczywiste;
  buffer = (int*)malloc(rozmiar_tablicy * sizeof *buffer);
  ptr2 = buffer;


  pFile = fopen("C:/in.txt", "r");


   if(pFile != NULL)
   {

    while(!feof(pFile))
     {
       fgets(line,10,pFile);


        strcpy(ptr,line);
        ptr += strlen(line);



       printf("%s\n",rzeczywiste);








     }

   len=sizeof(rzeczywiste)/sizeof(int);





    fclose(pFile);

    pFile = fopen("C:/b.txt", "w");

     for(i=0;i<len;i++)
       {
          liczba = atoi(rzeczywiste+i);
          fprintf(pFile, "%d\n", liczba);


      }
    fclose(pFile);



   }






   else
   {
    printf("could not opened the file.\n");
   }








return 0;
}
