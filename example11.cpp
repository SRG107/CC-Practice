/* ProductSmallestPair(sum,arr), if additon of least two elements of arr is less than 'sum' taken from user print
   product of those two smallest elements   */

#include <iostream>
using namespace std;
int ProductSmallestPair(int sum, int a[100]);
int main()
{
	int arr[100],n,s,i,r;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>s;
	r=ProductSmallestPair(s,arr);
	cout<<"\n"<<r;
}

int ProductSmallestPair(int sum, int a[100])
{
	int R,l1=0,l2=0,i,n;
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(a[i]<a[l1])
		{
			l1=i;
		}
	}
	a[l1] = ~(1<<31);
	for(i=1;i<n;i++)
	{
		if(a[i]<a[l2])
		{
			l2=i;
		}
	}
	R = a[l1]+a[l2];
	if(R<sum)
	{
		return a[l1]*a[l2];
	}
	else
	{
		return 0;
	}
}



