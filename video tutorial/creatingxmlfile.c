#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


fxml()
{



  char name[15];
  char root[15];
  char rozsz[5]={".xml"};
  char rozszstyl[5]={".xsl"};
  char rozszschemat[5]={".xsd"};
  char header[45]={"<?xml version='1.0' encoding='UTF-8'?>\n\n"};
  char headerxsl[40]={"<?xml-stylesheet type='text/xsl'"};
  char namespaceschema[60]={"xmlns:xsi='http://www.w3.org/2001/XMLSchema-instance'"};
  char schemalocatioon[35]={"xsi:noNamespaceSchemaLocation="};
  char tak[4]={"tak"};
  char odp[4];
  char odps[4];
  char nazwaodnosxsl[15];
  char nazwaodnosxsd[15];
  FILE *pFile;



  printf("jak chcesz nazwac swoj plik xml?\n:");
  gets(name);
  printf("jaka nazwe ma miec element glowny?\n:");
  gets(root);
  strcat(name,rozsz);

  printf("czy chcesz dodac odnosnik do xslt?[tak/nie]\n");
  gets(odp);
       if(strcmp(tak,odp)==0)


         { printf("czy chcesz dodac odnosnik do xsd?[tak/nie]\n");
              gets(odps);

               if(strcmp(tak,odps)==0)
                   {
                    printf("odnosnik do jakiego pliku xsl? podaj nazwe\n:");
                     gets(nazwaodnosxsl);
                      strcat(nazwaodnosxsl,rozszstyl);
                       printf("odnosnik do jakiego pliku xsd? podaj nazwe\n:");
                        gets(nazwaodnosxsd);
                         strcat(nazwaodnosxsd,rozszschemat);
                          pFile = fopen(name,"w");
                           fprintf(pFile,"%s%s href='%s'?>\n\n<%s\n%s\n%s'%s'>  \n\n\n\n\n%</%s>",header, headerxsl, nazwaodnosxsl,  root, namespaceschema, schemalocatioon, nazwaodnosxsd, root);
                            fclose(pFile);
                             return(main());



                   }



               else
               {
                printf("odnosnik do jakiego pliku xsl? podaj nazwe\n:");
                 gets(nazwaodnosxsl);
                  strcat(nazwaodnosxsl,rozszstyl);
                   pFile = fopen(name,"w");
                    fprintf(pFile,"%s%s href='%s'?>\n\n<%s>\n\n\n\n\n\n%</%s>",header, headerxsl, nazwaodnosxsl,  root, root);
                     fclose(pFile);
                      return(main());
                }




          }

       else
          {
            pFile = fopen(name,"w");
             fprintf(pFile,"%s\n\n<%s>\n\n\n\n\n\n%</%s>",header, root, root);
              fclose(pFile);
               return(main());

        }






}


fxslt()
{
  char name[15];
  char root[85]={"xsl:stylesheet version='1.0' xmlns:xsl='http://www.w3.org/1999/XSL/Transform'"};
  char endroot[25]={"xsl:stylesheet"};
  char rozsz[5]={".xsl"};
  char header[45]={"<?xml version='1.0' encoding='UTF-8'?>\n\n"};
  FILE *pFile;



  printf("jak chcesz nazwac swoj plik xslt?\n:");
  gets(name);
  strcat(name,rozsz);


 pFile = fopen(name,"w");
 fprintf(pFile,"%s\n\n<%s>\n\n\n\n\n\n%</%s>",header, root, endroot);

 fclose(pFile);

}


fxsd()
{
  char name[15];
  char root[85]={"xs:schema xmlns:xs='http://www.w3.org/2001/XMLSchema'"};
  char endroot[25]={"xs:schema"};
  char rozsz[5]={".xsd"};
  char header[45]={"<?xml version='1.0' encoding='UTF-8'?>\n\n"};
  FILE *pFile;



  printf("jak chcesz nazwac swoj plik xsd?\n:");
  gets(name);
  strcat(name,rozsz);


 pFile = fopen(name,"w");
 fprintf(pFile,"%s\n\n<%s>\n\n\n\n\n\n%</%s>",header, root, endroot);

 fclose(pFile);




}









int main()
{
  char wybor[4];
  char xml[4]={"xml"};
  char xslt[5]={"xslt"};
  char xsd[4]={"xsd"};





  printf("Jaki plik chcesz stworzyc? xml,xslt czy xsd?\n (jesli chcesz zakonczyc wcisnij 'enter')\n:");
  gets(wybor);

      if(strcmp(wybor,xml)==0)
      {
          fxml();
      }

      else if(strcmp(wybor,xslt)==0)
      {
        fxslt();
      }

      else if(strcmp(wybor,xsd)==0)
      {
        fxsd();
      }

      else
      {
        return 0;
      }


return 0;
}







