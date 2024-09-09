#include <stdio.h>
int main()
{
 int len,bd,c=0;
 printf("\nEnter length : ");
 scanf("%d",&len);
 printf("\nEnter braedth : ");
 scanf("%d",&bd);
 while(len!=0 && bd!=0)
{
 if(len>bd)
 {
  len = len-bd;
 }
 else
 {
  bd = bd-len;
 }
// else if(bd==len)
 //{
 // bd = bd-len;
 // len = len-bd;
// }
 c++;
}
printf("total : %d",c);
return 0;
}
