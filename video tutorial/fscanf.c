#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>




int main()
{


  FILE *pFile;
  char name[21];
  int score;

  pFile = fopen("C:/data.txt", "r");


   if(pFile != NULL)
   {

   fscanf(pFile,"%s %d",name,&score);

   printf("%s\n%d\n",name,score);







    fclose(pFile);

   }

   else
   {
    printf("could not opened the file.\n");
   }








return 0;
}
