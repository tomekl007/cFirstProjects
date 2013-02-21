#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>




int add(int a[2][4]) //in 2 dimension arrays you must specified second dimiension, can pass first dim. : ina a[][4];
{
     int sum = 0;
     int row,col;

     for(row = 0; row < 2 ; row++)
        for(col = 0; col < 4;col++)
           sum += a[row][col];  //sum += mean sum = sum + a[row][col];


   return sum;
}





int main()
{
int myarray[2][4] ={ {1,2,3,4},
                     {3,4,5,8},
                     {2,4,6,8} };

int result = 0;


result = add(myarray);

printf("sum is: %d\n",result);





return 0;
}
