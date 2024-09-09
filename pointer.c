#include <stdio.h>
int main()
{
 int a=4;
 int *p=&a;
 int **ptr=&p;

 *p=7;
 printf("A = %d  after *p=7\n",a);
 *p = *p + 10;
 printf("*p = %d after (*p+10)\n",*p);

 **ptr=100;
 printf("A = %d after **ptr=100\n",a);

 *p = *(p+10);
 printf("A = %d after *(p+10)",a);
 return 0;
}
