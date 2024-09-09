#include <iostream>
using namespace std;

int main()
{
	int i,j,n,c;
	cin>>n;

/*
	c=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<j+1<<" ";
		}
		cout<<"\n";
	}
*/

/*
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<c<<" ";
			c++;
		}
		cout<<"\n";
	}
*/

/*
	string s1;
	c=0;
	cin>>s1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<s1[c]<<" ";
			c++;
			if(s1[c]=='\0')
			{	c=0;	}
		}
		cout<<"\n";
	}
*/
/*
	c=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<c<<" ";
			c++;
		}
		cout<<"\n";
	}
	c--;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=(n-1-i);j++)
		{
			cout<<c<<" ";
			c--;
		}
		cout<<"\n";
	}
*/
/*
	int a,b;                                // Square Pyramid Biggest at top
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>(n/2))
			{
				a = n-1-i;
			}
			else
			{	a=i;	}
			if(j>(n/2))
			{
				b = n-1-j;
			}
			else
			{	b=j;	}
			int min = a<b? a:b;
			cout<<min+1<<" ";
		}
		cout<<"\n";
	}
*/


	int a,b;                                // Square Pyramid Smallest at top
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>(n/2))
			{
				a = n-1-i;
			}
			else
			{	a=i;	}
			if(j>(n/2))
			{
				b = n-1-j;
			}
			else
			{	b=j;	}
			int min = a<b? a:b;
			cout<<(n/2)-min+1<<" ";
		}
		cout<<"\n";
	}


/*
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			
		}
	}
*/
}
