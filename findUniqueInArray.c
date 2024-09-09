#include <stdio.h>
int main(){
int arr[11]={1,2,3,4,5,13,3,4,2,1,5};
int x=arr[0],i;
for(i=1;i<11;i++)
{
 x = x^arr[i];
}
printf("Unique : %d",x);
return 0;
}
