#include <stdio.h>
#include "header2.h"
int main()
{
 int a=4,b=5;
 int c = add(a,b);
 printf("%d\n",c);
 return 0;
}

int add(int x, int y)
{
 int z = x+y;
 return z;
}
