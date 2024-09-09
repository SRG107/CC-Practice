#include <stdio.h>
int fact(int);
int main()
{
 int a=5;
 int z;
 z=fact(a);
 printf("%d",z);
}

int fact(int n)
{
 int ans;
 if(n>0){
  ans = n*fact(n-1);}
 else
 {
  ans =1;
 }
 return ans;

}
