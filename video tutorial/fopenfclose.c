#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{

  char tytul[20];
  FILE *pFile;     //declared file pointer, whitch you must catch

  pFile = fopen("C:/abc.xml", "a");  //now program need not file name, but file pointer , path must exist include abc.txt - it owerwrite this


   if(pFile != NULL)
   {
       printf("podaj tytul filmu :\n");
       gets(tytul);
       fprintf(pFile, "<tytul>%s</tytul>\n",tytul);

    fclose(pFile);  //now pFile not point to any file

   }

   else
   {
    printf("could not opened the file.\n");
   }




    /*
     "r" read from file, file must exist
     "w" to write file, if file exist is delete and create new one, file not must exist , you can only write in this mode
     "a" add to a file, ewerything whitch you write it will add at the end of file, you can only write in this mode
     "r+" read and write, file must exist
     "w+" read and write, file will be deleted if alredy exist, if not will be created
     "a+" read and write, if file exist it write at the end of this file
      all opened in text mode, if want work on bin file you must : rb wb ab r+b w+b a+b
    */




return 0;
}
