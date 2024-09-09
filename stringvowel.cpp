/* count vowels in given string */

#include <iostream>
using namespace std;
int main()
{
	string str;
	char c;
	int i=0,count=0;
	cin>>str;
	while(str[i]!='\0')
	{
		// ORing with 32 will change the UPPER to LOWER c = str[i]||32;
		// &ing with (~32) will change LOWER to UPPER c = str[i] & (~32);
		// XORing with 32 causes UPPER to LOWER and vice versa c = str[i]^32;
		c = str[i]||32;
		if(c=='a' || c=='e' || c=='i' || c=='o' ||
		   c=='u')
		{
			count++;
		}
		i++;
	}
	cout<<"\n"<<count;
return 0;
}
