/* Inversing the array by swapping numbers from both ends */

#include <iostream>
using namespace std;
int main()
{
	int arr[100],n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	i=0;
	j=(n-1);
	while(i<j)
	{
		arr[i] = arr[i]^arr[j];
		arr[j] = arr[i]^arr[j];
		arr[i] = arr[i]^arr[j];
		i++;
		j--;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" | ";
	}
return 0;
}
