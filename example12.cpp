// move all hypens to one side of the string // 

#include <iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int i=str.size(),j=i,k;
	while(str[j]!='-' && j>=0)
	{
		j--; //find first '-'
	}
		if(j == -1)
		{
			cout<<"no hypen\n";
		}
		else
		{
			for(k=j-1;k>=0;k--)
			{
				if(str[k]!='-')
				{
					str[k] = str[k]^str[j];
					str[j] = str[k]^str[j];
					str[k] = str[k]^str[j];
					j++;
				}
			}
			cout<<str;
		}
}
