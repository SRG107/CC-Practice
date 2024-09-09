/* Take arrya size from user. take rotation no. to rotate the array in given 
dierection */

#include <iostream>
using namespace std;
int main()
{
	int arr[100],n,r,temp,i,j;
	cout<<"Enter size : ";
	cin>>n;
	cout<<"\nEnter rotation number : ";
	cin>>r;
	cout<<"\nEnter elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	char c;
	cout<<"Enter L or R direction : ";
	cin>>c;
	if(c == 'R'){
	//right rotation
	for(int j=0;j<r;j++)
	{
		temp=arr[n-1];
		for(int i=(n-2);i>=0;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[0]=temp;
	}
	 }
	else if(c == 'L'){
	//left rotation
	for(int j=0;j<r;j++)
	{
		temp=arr[0];
		for(int i=i;i>=n-1;i++)
		{
			arr[i-1]=arr[i];
		}
		arr[n-1]=temp;
	}
	 }
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" | ";
	}
return 0;
}
