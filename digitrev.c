#include <stdio.h>

int main()
{
	int n,x,d[10],i=0,j=0,sum=0;
	scanf("%d",&n);
	while(n)
	{
	//	d[i] = n%10;
	//	i++;
	//	n = n/10;
		x = n%10;
		sum = (sum*10)+x;
		n = n/10;
	}
//	for(j=0;j<i;j++)
//	{
//		sum = (sum*10)+d[j];
//	}
	printf("%d",sum);
	return 0;
}
