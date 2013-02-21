#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
char name1[] = "Joe";
char name2[] = "Tomek";
char name3[] = "Marcin";
char name4[] = "Dawid";

char* pName[4] = {0}; //declarate array of pointers, each stores 0(Null)
char i;


pName[0] = name4;
pName[1] = name1;
pName[2] = name2;
pName[3] = name3;

for(i = 0;i < 4;i++)
   printf("%s\n",pName[i]);



return 0;
}
