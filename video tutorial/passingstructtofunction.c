#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct rectangle
{
    int length;
    int width;


};


int area(struct rectangle rect1)
{

int result;
result = rect1.width * rect1.length;
return result;

}



int main()
{

int rect1area;



struct rectangle rect1;


rect1.length = 10;
rect1.width = 5;

rect1area = area(rect1);

printf("the area of rect1 is %d",rect1area);



return 0;
}
