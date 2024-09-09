//size
//value
//print prime vakues

#include <stdio.h>
int main()
{
	int x;
	printf("Enter Size of array :\t");
	scanf("%d",&x);
	int arr[x],i,j;
	printf("Enter array elements :\n");
	for(i=0;i<x;i++)
	{
 	 scanf("%d",&arr[i]);
	}
	for(i=0;i<x;i++)
	{
	 for(j=2;j<=(arr[i]/2);j++)
	 {
		if(arr[i] % j == 0)
		{
		 break;
		}
	 }
	 if(i == (arr[i]/2 + 1))
	 {
	  printf("%d",arr[i]);
	 }
	}
}
