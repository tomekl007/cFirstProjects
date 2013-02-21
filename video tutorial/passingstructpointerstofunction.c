#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct rectangle
{
    int length;
    int width;
    int area;

};


void area(struct rectangle *rect1)
{


rect1->area = rect1->width * rect1->length;


}



int main()
{

int rect1area;



struct rectangle rect1;


rect1.length = 10;
rect1.width = 5;

area(&rect1);

printf("the area of rect1 is %d",rect1.area);



return 0;
}
