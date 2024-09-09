#include <stdio.h>
int main()
{
 int a=4;
 int b=10;
 int *p=&a;
 printf("Addr of a = %d\n",&a);
 printf("Value of *p = %d\n",p);
 printf("Value of a = %d\n",a);
 printf("Value of b = %d\n",b);
 *p=*(p+1);
 printf("After *p=*(p+1)\n"); 
 printf("A = %d\n",a);
 printf("B = %d\n",b);
 printf("Addr of B = %d\n",&b);
 printf("Value of *p = %d\n",p);
}
