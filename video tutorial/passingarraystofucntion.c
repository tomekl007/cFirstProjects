#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int computeDaysinAyear(int days[])  //mozesz tez napisac :int computeDaysinAyear(int *days) , nazwa tablicy to wskaznik na jej pierwszy element
{
    int index;
    int sum = 0;

    for(index = 0;index < 12; index++)
      {
        sum = sum + days[index];
      }

      return sum;
}

int main()
{

int nDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int nDaysinYear = 0;

nDaysinYear = computeDaysinAyear(nDays);

printf("the number days in year is %d\n",nDaysinYear);


return 0;
}
