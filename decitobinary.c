#include <stdio.h>
int main(){
int n,d[10],i=0;
scanf("%d",&n);
while(n)
{
 d[i] = n%2;
 i++;
 n = n/2;
}
while(i>=0)
{
 printf("%d",d[i]);
 i--;
}
return 0;
}
