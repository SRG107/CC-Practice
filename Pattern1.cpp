#include <iostream>
using namespace std;

int main()
{
	int i,n,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==(n-1) || j==(n-1) || i==j || i+j==(n-1))
			{	cout<<"* ";	}
			else
			{	cout<<"  ";	}
		}
		cout<<"\n";
	}
}
