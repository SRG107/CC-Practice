#include <iostream>
using namespace std;

void dectobase(int, int);
int main()
{
	int n,num;
	string out;
	cin>>n;
	cin>>num;
	dectobase(n,num);
}

void dectobase(int n, int num)
{
	string str="something";
	int i=0,d,j=0;
	while(num)
	{
		d = (num % n);
		str[i] = d<10? (d+48):(d+55);
		i++;
		num = num/n;
	}
	str[i]='\0';
	for(j=0;j<i;j++)
	{
		cout<<str[j];
	}

	int a=0,b=i-1;
	while(a<b)
	{
		str[a] = str[a]^str[b];
		str[b] = str[a]^str[b];
		str[a] = str[a]^str[b];
		a++,b--;
	}
	for(a=0;a<i;a++)
	{
		cout<<str[a];
	}
}
