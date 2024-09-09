#include <stdio.h>

int main()
{
 int a=10;
 printf("%d\n",a);
 add(&a);
 printf("%d\n",a);

 return 0;
}

int add(int *p)
{
 *p=20;
}
