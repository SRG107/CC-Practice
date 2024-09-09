/* take unique array elements , add second largest among even positions and second smallest from odd positions  */

#include <iostream>
using namespace std;
int main()
{
	int arr[100],n,i,max=0,min=1,r;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=2;i<n;i=i+2)
	{
		if(arr[i]>arr[max])
		{
			max=i;
		}
	}
	arr[max]=0;
	max=0;
	for(i=2;i<n;i=i+2)
	{
		if(arr[i]>arr[max])
		{
			max=i;
		}
	}
	for(i=3;i<n;i=i+2)
	{
		if(arr[i]<arr[min])
		{
			min=i;
		}
	}
	arr[min] = ~(1<<31); // 1 shifted at 31st position and the inverted
	min=1;
	for(i=3;i<n;i=i+2)
	{
		if(arr[i]<arr[min])
		{
			min=i;
		}
	}
	r = arr[max]+arr[min];
	cout<<"\n"<<arr[max]<<"\n"<<arr[min]<<"\n"<<r;
return 0;
}
