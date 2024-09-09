//print 'A' for num divided by 3 only
//print 'B' for num divided by 5 only
//print 'C' for num divided by 3 and 5 both
#include <stdio.h>
int main()
{
 int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
 int i=0,c=15;
 while(c)
 {
  if((arr[i]%3 == 0) && (arr[i]%5 == 0))
  {
   printf("C\n");
   i++;
  }
  else if(arr[i]%3 == 0)
  {
   printf("A\n");
   i++;
  }
  else if(arr[i]%5 == 0)
  {
   printf("B\n");
   i++;
  }
  else
  {
   printf("%d\n",arr[i]);
   i++;
  }
  c--;
 }

return 0;
}
