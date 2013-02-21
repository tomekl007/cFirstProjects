#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct wezel
{
  int wartosc;
  struct wezel *lewy;
  struct wezel *prawy;
}

*korzen=NULL,*w=NULL,*w1=NULL,*pom,*pom1,*temp;



void dodaj_element()
{
        char tak[4]={"tak"};
      char buffor[4]={"tak"};
      int a = 0;
      int b = 0;

  korzen=(struct wezel*)malloc(sizeof(struct wezel));
  korzen->lewy=NULL;
  korzen->prawy=NULL;
  printf("podaj wartosc dla korzenia: ");
  scanf("%d",&a);
  korzen->wartosc=a;
  temp=korzen;
  while(strcmp(tak,buffor)==0)
{


 printf("podaj warosc dla poddrzewa1:  ");
 scanf("%d",&a);
  printf("podaj warosc dla poddrzewa2:  ");
 scanf("%d",&b);

 if(a>b)
 {
  w=(struct wezel*)malloc(sizeof(struct wezel));
  w->lewy=NULL;
  w->prawy=NULL;
  w->wartosc=a;
  temp->lewy=w;

  w1=(struct wezel*)malloc(sizeof(struct wezel));
  w1->lewy=NULL;
  w1->prawy=NULL;
  w1->wartosc=b;
  temp->prawy=w1;
 }
 else if(a<b)
 {
  w1=(struct wezel*)malloc(sizeof(struct wezel));
  w1->lewy=NULL;
  w1->prawy=NULL;
  w1->wartosc=b;
  temp->lewy=w1;

  w=(struct wezel*)malloc(sizeof(struct wezel));
  w->lewy=NULL;
  w->prawy=NULL;
  w->wartosc=a;
  temp->prawy=w;
 }

 printf("czy chcesz dodawac kolejne poddrzewa? [tak/nie]\n");
 scanf("%s",buffor);
 temp=temp->lewy;
}





}

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

void usundrzewo()
{
  korzen->lewy=NULL;
  korzen->prawy=NULL;
  korzen=NULL;


}

int usunwartosc()
{
   struct wezel* temp;
   int odp ;
   printf("\n jaka wartosc chcesz usunac? \n");
   scanf("%d",&odp);

/*if( korzen->wartosc == odp)
   {korzen->wartosc = 0;
    return 0;
   }

if((korzen != NULL) && (korzen->wartosc != odp))
 {
   usunwartosc(korzen->lewy);
   printf("%d ",korzen->wartosc);
   usunwartosc(korzen->prawy);

 }
*/



while ((korzen != NULL) && (korzen->wartosc != odp))
    {


        if (odp < korzen->wartosc)
           {

              korzen = korzen->lewy ;



            if(korzen->wartosc == odp )
           {
               korzen->wartosc = 0;
               return 0;
            }
          }
        else
          {
              korzen = korzen->prawy ;

            if(korzen->wartosc == odp )
           {

               korzen->wartosc = 0;
               return 0;
            }

          }

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
    char tak[4]={"tak"};
    char odp[4]={"nie"};

    dodaj_element();




  printf("indorder: \n");
  drukuj_inorder(korzen);
  printf("\npreorder: \n");
  drukuj_preorder(korzen);

   printf("\nchcesz usunat to drzewo z pamieci ?: [tak/nie] \n");
   scanf("%s",odp);
   if(strcmp(tak,odp)==0)
   {
       usundrzewo();
   }

  printf("\nchcesz usunat element drzewa z pamieci ?: [tak/nie] \n");
   scanf("%s",odp);

   if(strcmp(tak,odp)==0)
   {



       usunwartosc();

   }



  printf("\npostorder: \n");
  drukuj_postorder(korzen);
  return 0;

}
