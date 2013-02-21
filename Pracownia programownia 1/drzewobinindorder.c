#include <stdio.h>
#include <stdlib.h>

struct wezel
{
  int wartosc;
  struct wezel *lewy;
  struct wezel *prawy;
}

*korzen=NULL,*w=NULL,*w1=NULL,*pom,*pom1;

void drukuj_preorder(struct wezel *korzen)
{
    if(korzen)
  {
      printf("%d ",korzen->wartosc);
      drukuj_preorder(korzen->lewy);
      drukuj_preorder(korzen->prawy);

   }




}

void drukuj_postorder(struct wezel *korzen)
{
    if(korzen)
  {

      drukuj_postorder(korzen->lewy);
      drukuj_postorder(korzen->prawy);
      printf("%d ",korzen->wartosc);
   }




}


void drukuj_inorder(struct wezel *korzen) //lewe poddrzewo, prawe,rekurencyjnie
{
 if(korzen)
  {
   drukuj_inorder(korzen->lewy);
   printf("%d ",korzen->wartosc);
   drukuj_inorder(korzen->prawy);
   }

}

int main(void)
{
  korzen=(struct wezel*)malloc(sizeof(struct wezel));
  korzen->lewy=NULL;
  korzen->prawy=NULL;
  korzen->wartosc=1;

  w=(struct wezel*)malloc(sizeof(struct wezel));
  w->lewy=NULL;
  w->prawy=NULL;
  w->wartosc=2;

  w1=(struct wezel*)malloc(sizeof(struct wezel));
  w1->lewy=NULL;
  w1->prawy=NULL;
  w1->wartosc=3;
  korzen->lewy=w;
  korzen->prawy=w1;
  pom=w;
  pom1=w1;

  w=(struct wezel*)malloc(sizeof(struct wezel));
  w->lewy=NULL;
  w->prawy=NULL;
  w->wartosc=4;

  w1=(struct wezel*)malloc(sizeof(struct wezel));
  w1->lewy=NULL;
  w1->prawy=NULL;
  w1->wartosc=5;
  pom->lewy=w;
  pom->prawy=w1;

  w=(struct wezel*)malloc(sizeof(struct wezel));
  w->lewy=NULL;
  w->prawy=NULL;
  w->wartosc=6;
  pom1->lewy=w;

  printf("indorder: \n");
  drukuj_inorder(korzen);
  printf("\npreorder: \n");
  drukuj_preorder(korzen);
  printf("\npostorder: \n");
  drukuj_postorder(korzen);
  return 0;

}
