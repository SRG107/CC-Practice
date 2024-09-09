#include <stdio.h>
int main()
{
 int k,i,n;
 printf("Enter Numbewr : \t");
 scanf("%d",&n);
 for(k=2;k<=n;k++){
 for(i=2;i<=(k/2);i++)
 {
  if(i == (n/2 + 1) )
  {
   printf("%d\n",k);
   break;
  }
 }
 }
 return 0;
}
