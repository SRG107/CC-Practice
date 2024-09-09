#include <iostream>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int i=0,j=0,sz,flag=1;
	while(str[i]!='\0')
	{
		i++;
	}
	sz= i-1;
	for(i=0,j=sz;i<j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			flag=0;
			break;
		}
	}
	if(flag)
	{
		cout<<"Palindrome\n";
	}
	else
	{
		cout<<"Not Palindrome\n";
	}
return 0;
}
