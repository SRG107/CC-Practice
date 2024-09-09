#include <iostream>
using namespace std;

int main()
{
	int i,j,n;
	cin>>n;
/*
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)   // for Lower-Left triangle
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
*/

/*
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j>=(n-1))   // for Lower-Right triangle
			{
				cout<<"* ";
			}
			else
			{	cout<<"  ";	}
		}
		cout<<"\n";
	}
*/

/*
	for(i=0;i<n;i++)
	{
		for(j=0;j+i<=(n-1);j++)   // for Upper-Left triangle
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
*/

/*                                       // for Upper-Right triangle
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{	cout<<"  ";	}
		for(j=i;j<(n-1);j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
*/

/*                                               //Diamong printing
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-1-i);j++)    // for printing '  ' in the begining
		{	cout<<" ";	}
		for(j=0;j<=i;j++)        // for printing '* ' after '  '
		{	cout<<"* ";	}
		cout<<"\n";
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)    // for printing ' '
		{	cout<<" ";	}
		for(j=0;j<(n-1-i);j++)        // for printing ' *'
		{	cout<<" *";	}
		cout<<"\n";
	}
*/

/*                                               // hollow diamond
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-1-i);j++)    // for printing '  ' in the begining
		{	cout<<" ";	}
		for(j=0;j<=i;j++)        // j starts with 0th index and ends with ith index
		{
			if(j==0  || j==i)
			{	cout<<"* ";	}
			else
			{	cout<<"  ";	}
		}
		cout<<"\n";
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)    // for printing ' '
		{	cout<<" ";	}
		for(j=0;j<=(n-1-i);j++)        // j starts with 0th index and ends with (n-1-i)th index
		{
			if(j==0  || j==(n-1-i))
			{	cout<<"* ";	}
			else
			{	cout<<"  ";	}
		}
		cout<<"\n";
	}
*/

/*                                           // Hour Glass pattern
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)    // for printing ' '
		{	cout<<" ";	}

		for(j=0;j<=(n-1-i);j++)        // for printing ' *'
		{	cout<<" *";	}
		cout<<"\n";
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<(n-1-i);j++)    // for printing ' '
		{	cout<<" ";	}

		for(j=0;j<=i;j++)        // for printing ' *'
		{	cout<<" *";	}
		cout<<"\n";
	}
*/

/*                                                  // Hollow Hour Glass
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)    // for printing ' '
		{	cout<<" ";	}

		for(j=0;j<=(n-1-i);j++)        // for printing ' *'
		{
			if(i==0 || j==0 || j==(n-1-i))
			{	cout<<" *";	}
			else
			{	cout<<"  ";	}
		}
		cout<<"\n";
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<(n-1-i);j++)    // for printing ' '
		{	cout<<" ";	}

		for(j=0;j<=i;j++)        // for printing ' *'
		{
			if(i==(n-1) || j==0 || j==i)
			{	cout<<" *";	}
			else
			{	cout<<"  ";	}
		}
		cout<<"\n";
	}
*/
}
