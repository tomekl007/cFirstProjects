#include <stdio.h>
#include <stdlib.h>



struct rectangle {
    int length;
    int width;
    int area;
    struct rectangle *pNext;
};

int main()
{

    int count = 0;

    /* This won't change, or we would lose the list in memory */
    struct rectangle *root;
    /* This will point to each node as it traverses the list */
    struct rectangle *conductor;

    root = malloc( sizeof(struct rectangle) );
    root->pNext = 0;
    root->length = 48;
    root->width = 23;
    root->area = root->width * root->length;
    conductor = root;
     if ( conductor != 0 ) {
        while ( conductor->pNext != 0)
        {
            conductor = conductor->pNext;
        }
    }
    /* Creates a node at the end of the list */

    while(count < 3)  //how many elements(struct node) of linked list you want ?
    {


    conductor->pNext = malloc( sizeof(struct rectangle)+100 );

    conductor = conductor->pNext;





    if ( conductor == 0 )
    {
        printf( "Out of memory" );
        return 0;
    }
    /* initialize the new memory */
    count++;
    conductor->pNext = 0;      // now pointer next point again to null

    conductor->length = 42 + count;
    conductor->width = 32 + count;
    conductor->area = conductor->width * conductor->length;



    }

    conductor = root;
      while ( conductor != NULL ) {
    printf( "width:%d\n length:%d\n area:%d\n", conductor->width, conductor->length, conductor->area );
    conductor = conductor->pNext;
}

    return 0;

}
