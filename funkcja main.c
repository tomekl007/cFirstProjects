#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv)

{  if
    (*argv)
    {
    puts (*argv);
    return main(argc-1 , argv+1);}
    else{

    return EXIT_SUCCESS;}
}
