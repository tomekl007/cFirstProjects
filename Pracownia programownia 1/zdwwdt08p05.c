#include <stdio.h>
#include <stdlib.h>

void kolejnosc()
{  float *wsknazmienne[10];
   int i = 0;

   for(i = 0 ; i<=10; i++)
    {if(wsknazmienne[i]<wsknazmienne[i+1])
     {  if (i = 10)
          {printf("sa w porzadku rosnacym");  }

        else
     {
        kolejnosc();
     }
     }

     else
       {printf("zmienne nie sa ulozone w porzadku rosnacym");
        return 0; }


}

}




int main (void)
{
   kolejnosc();







return 0;
}
