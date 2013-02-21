#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  int x;
  int y;


main()
{

  int zwg=0;
  int zwk=0;
  do
  {
  printf("\nwcisnij 0-kamien , 1-papier , 2-nozyczki: ");
  scanf("%d",&x);
  srand( time(NULL) );
  y= rand() % 3;


  if (y==0)
  printf("\nkomputer wybral kamien");
  else if(y==1)
  printf("\nkomputer wybral papier");
  else if (y==2)
  printf("\nkomputer wybral nozyczki");






  if (x==y)
  printf("\nremis");

  else if (x==0,y==1)
  printf("\nwygral komputer"),zwk=zwk+1 ;


  else if (x==0,y==2)
  printf("\nwygral gracz"),zwg=zwg+1 ;

  else if (x==1,y==0)
  printf("\nwygral gracz"),zwg=zwg+1;

  else if (x==1,y==2)
  printf("\nwygral komputer"),zwk=zwk+1;

  else if (x==2,y==0)
  printf ("\nwygral komputer"),zwk=zwk+1;

  else if (x==2,y==1)
  printf("\nwygral gracz"),zwg=zwg+1;



  }
  while (3<=zwg,3<=zwk);





 return 0;
 }

