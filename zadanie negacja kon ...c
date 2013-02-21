#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int y;
    printf("podaj liczbe x:");
    scanf("%d",&x);
    printf("podaj liczbe y:");
    scanf("%d",&y);
    int koniunkcja=x&&y;
    int alternatywa=x||y;
    int negacjax=!x;
    int negacjay=!y;
    int iloczynbitowy=x&y;
    int sb=x|y;
    int brs=x^y;
    int negbx=~x;
    int negby=~y;
    printf("koniunkcja x i y wynosi: %d\n",koniunkcja);
    printf("alternatywa x i y wynosi: %d\n",alternatywa);
    printf("negacja x : %d\n",negacjax);
    printf("negacja y : %d\n",negacjay);
    printf("iloczyn bitowy y i x: %d\n",iloczynbitowy);
    printf("suma bitowa y i x : %d\n",sb);
    printf("bitowa roznica symetryczna x i y : %d\n",brs);
    printf("negacja bitow x %d\n",negbx);
    printf("negacja bitow y %d\n",negby);
}

