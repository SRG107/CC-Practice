#include <stdio.h>
#include <stdlib.h>

int main()
{
 int *p;
 char **ptr;
 **ptr=&p;
 p = (int*)malloc(16);
 *p = 12;
 *(p+1) = 24;
 printf("%d\n",*p);
 printf("%d\n",*(p+1));
 printf("%d\n",*(p+2));
 printf("%d\n",*(p+6));
 printf("%d\n",*(p+7));
 printf("%d\n",*(p-1));
 printf("%d\n",*(p+5));

 return 0;
}
