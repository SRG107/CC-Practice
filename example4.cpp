/* take string, count the no. of occurances of character, if a character is present at least once
 then print the letter and its occurance */

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[26]={0},i=0;
	string str;
	char c,x;
	cin>>str;
	while(str[i]!='\0')
	{
		arr[str[i] - 97]++;
		i++;
	}
	for(i=0;i<26;i++)
	{
		if(arr[i]!=0)
		{
			c = i+97;
			cout<<c<<" - "<<arr[i]<<"\n";
		}
	}
x=78;
cout<<"78 = "<<x;
}
