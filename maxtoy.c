#include <stdio.h>
int main()
{
 int w,b,c,car;
 printf("Enter wheels : ");
 scanf("%d",&w);
 printf("Enter body : ");
 scanf("%d",&b);
 printf("Enter character : ");
 scanf("%d",&c);
 w = w/4;
 c = c/2;
 car = (w<b? (w<c?w:c) : (b<c?b:c));
printf("car =  %d",car);

// if(w<=b)
// {
// if(w<=c)
//  {
//   printf("%d",w);
//  }
//  else
//  {
//   printf("%d",c);
//  }
// }
return 0;
}
