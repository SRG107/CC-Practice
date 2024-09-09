/* take no. of rats and unit of food a rat consumes, take a array containing no. of units of food available in the houses. if the food is sufficient print the no. of 
  houses required */

#include <iostream>
using namespace std;
int main()
{
	int i,rat,amt,unit,n,arr[100],s=0;
	cin>>rat;
	cin>>unit;
	cin>>n;
	amt = rat*unit;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	i=0;
	while(i!=n)
	{
		s = s+arr[i];
		cout<<"s = "<<s<<endl;
		if(s>=amt)
		{
			cout<<i+1<<"\n";
			break;
		}
		i++;
		cout<<"i = "<<i<<endl;
	}
	if(i==n)
	{
		cout<<"0\n";
	}
return 0;
}
