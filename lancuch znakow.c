#include <stdio.h>

int main(void)
{ char nazwisko[9];
  int i=0;
  char znak;
  char temp;
  znak='0';
  while ((i<=8) && (znak!='0'))
  {
  printf("podaj %d litere nazwiska -max 9 znakow , lub 0 aby skonczyc  ",i+1);
  znak=getchar();
    for(temp='0';temp!='\n';temp=getchar());
      if(znak!='0')
      {nazwisko[i]=znak;
        i++;
    }
  }

  nazwisko[i]='\0';

  printf("podaj nazwisko %s \n ",nazwisko);
return 0;

}
