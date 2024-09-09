/* take a odd length string, where A denotes AND, B denotes OR, C denotes XOR .
   string will contain 0,1,A,B,C only and output will be the operations perfored serially. */

#include <iostream>
using namespace std;
int OperationBinaryString(string str);
int main()
{
	int i,r;
	string str1;
	cin>>str1;
	r=OperationBinaryString(str1);
	cout<<r-48;
return 0;
}

int OperationBinaryString(string str)
{
//Operators will be always present at odd position and operands at even
	int R,j;
	j=1;
	R=str[0];
	while(str[j]!='\0')
	{
		if(str[j]=='A')
		{
			R = R&str[j+1];
		}
		else if(str[j]=='B')
		{
			R = R|str[j+1];
		}
		else if(str[j]=='C')
		{
			R = R^str[j+1];
		}
		j = j+2;
	}
return R;
}

