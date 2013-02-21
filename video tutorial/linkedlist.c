#include <stdio.h>
#include <stdlib.h>

struct node {
  int x;
  struct node *pNext; // this is pointer to struct node itself , (jakby wskaznik na siebie sam¹ )
};

int main()
{
    /* This won't change, or we would lose the list in memory */
    struct node *root; //pointer root point to struct node
    /* This will point to each node as it traverses the list */
    struct node *conductor; //pointer conductor point to struct node

    root = malloc( sizeof(struct node) ); //pointer root whith point to struct will be point to adress whith malloc gives . so struct root is store there
    root->pNext = 0; // pointer next = 0
    root->x = 12;  // x = 12
    conductor = root; // conductor now is equal to root
    if ( conductor != 0 ) {   //so conductor is not equal 0 because earlier root point to struct so not "0"
        while ( conductor->pNext != 0) // pointer next is equal 0 so skip this loop
        {
            conductor = conductor->pNext; // but if pointer next shows address then conducotr will equal to pointer next
        }
    }
    /* Creates a node at the end of the list */
    conductor->pNext = malloc( sizeof(struct node) ); //now to pointer next point to address whith malloc gives

    conductor = conductor->pNext;  //so now conductor is there where pointer next point

    if ( conductor == 0 )    // conductor is not equal 0, so we skip this loop
    {
        printf( "Out of memory" );
        return 0;
    }
    /* initialize the new memory */
    conductor->pNext = 0;      // now pointer next point again to null
    conductor->x = 42;         // int x = 42



    conductor = root;  // root is point to start of list
      while ( conductor != NULL ) {  // conducotr is not equal "0"
    printf( "%d\n", conductor->x ); // printf x whith shows conductor
    conductor = conductor->pNext;  //change conductor to pointer Next
}

    return 0;

}
