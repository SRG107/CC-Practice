#include <stdio.h>
int main()
{
 //find no. divisible by 7
 int a=5,b=50;
 int i=a;
 while(i % 7 != 0)
 {
  i++;
 }
 while(i <= b)
 {
  printf("%d\n",i);
  i+=7;
 }
 return 0;
}
