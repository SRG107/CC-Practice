#include <stdio.h>
int main()
{
 int a=257;
 char *p=&a;

 printf("value of First byte of a = %d\n",*p);

 printf("value of second byte of a = %d\n",*(p+1));
 return 0;
}
