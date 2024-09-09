#include <stdio.h>
int main()
{
 int a[3] = {2,4,6};
 printf("%d\n",a[0]);
 printf("%d\n",a[1]);
 printf("%d\n",a[2]);
 printf("Using pointer\n");
 printf("*(a+0) = %d\n",*(a+0));
 printf("*(a+1) = %d\n",*(a+1));
 printf("*(a+2) = %d\n",*(a+2));
return 0;
}
