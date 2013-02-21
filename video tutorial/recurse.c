#include <stdio.h>
#include <stdlib.h>


void count_to_ten ( int count )
{
    // we only keep counting if we have a value less than ten
       if ( count < 10 )
       {
           count_to_ten( count + 1 );
       }
}


void printnum ( int begin )    //Simply have it keep incrementing a variable passed in, and then output the variable twice:
                               //once before the function recurses, and once after.
{
    begin = begin * 2 ;
    printf( "%d", begin );
    if ( begin < 70 )         /* The base case is when begin is no longer */
    {                           /* less than 9 */
        printnum ( begin + 1 );
    }
    /* display begin again after we've already printed everything from 1 to 9
     * and from 9 to begin + 1 */
       printf( "%d", begin );
}

int main()
{


   printnum(8);



    return 0;

}
