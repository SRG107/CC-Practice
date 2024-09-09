#include <iostream>
using namespace std;

int main()
{
	int arr[10]={0},i,j,flag=1,c=0;
	string str;
	cin>>str;
	i=0;
	while(str[i]!='\0')
	{
		arr[str[i]-48]++;
		i++;
	}
	i=0;
	while(str[i]!='\0')
	{
		if(str[i] != (arr[i]+48))
		{
			flag=0;
			cout<<flag<<endl;
			break;
		}
		i++;
	}
	j=0;
	while(str[j]!='\0')
	{
		cout<<arr[j];
		j++;
	}
	if(flag==1)
	{
		cout<<"\ntrue\n";
		for(i=0;i<10;i++)
		{
			if(arr[i]>0)
			{
				c++;
			}
		}
		cout<<c;
	}
	else
	{
		cout<<"\nfalse\n";
	}
	
}

