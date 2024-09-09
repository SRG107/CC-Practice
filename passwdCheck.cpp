/* at least 8 character, 1 upper, 1 lower, 1 num, 1 special symbol */

#include <iostream>
using namespace std;
int main()
{
	string str;
	int numflg=0,upflg=0,lowflg=0,szflg=0,symflg=0,i;
	cin>>str;
	i=0;
	while(str[i]!='\0')
	{
	//	cout<<"Inside While Loop\n";
		if(48<=str[i] && str[i]<= 57)
		{
			numflg=1;
			cout<<"Number\n";
		}
		else if(65<=str[i] && str[i]<= 90)
		{
			upflg=1;
			cout<<"Upper\n";
		}
		else if(97<=str[i] && str[i]<= 122)
		{
			lowflg=1;
			cout<<"Lower\n";
		}
		else if(symflg==0)
		{
			symflg=1;
			cout<<"Symbol\n";
		}
		i++;
	}
	if (i>=8 && (numflg+upflg+lowflg+symflg) == 4)
	{
		cout<<"Valid Password";
	}
	else
	{
		cout<<"Invalid Password";
	}
return 0;
}
