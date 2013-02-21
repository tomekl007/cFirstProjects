#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct rectangle
{
    int length;
    int width;


};

int main()
{





struct rectangle rect1;
struct rectangle *pRect = 0;

rect1.length = 10;
rect1.width = 5;

pRect = &rect1;

pRect->length = 6;
pRect->width = 10;


return 0;
}
