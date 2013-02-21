#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>




int main()
{

  char tytul[25];
  int ocena;
  char answer[10] = {"t"};
  char dalej[10] = {"t"};
  FILE *pFile;     //declared file pointer, whitch you must catch

  pFile = fopen("C:/databasemovie.xml", "w");  //now program need not file name, but file pointer , path must exist include abc.txt - it owerwrite this


   if(pFile != NULL)
   {
       do
       {


       printf("tytul filmu: ");
       gets(tytul);
       printf("ocena: ");
       scanf("%d",&ocena);

       fprintf(pFile,"<tytul>%s</tytul>\n<ocena>%d</ocena>\n",tytul,ocena);


       printf("Dodajesz kolejny film?[t/n]\n");
       scanf("%s",answer);

       }
       while(strcmp(dalej,answer)== 0);


    fclose(pFile);  //now pFile not point to any file

   }

   else
   {
    printf("could not opened the file.\n");
   }








return 0;
}
