#include <iostream>
using namespace std;
int main()
{
	int i,k,k,arr[26];
	string str1,str2;
	cin>>str1;
	cout<<"\n";
	cin>>str2;
	while(str1[i]!='\0')
	{
		arr[str1[i] - 97]++;
		i++
	}
	while(str2[j]!='\0')
	{
		arr[str2[j] - 97]--;
		j++
	}
	for(k=0;k<26;k++)
	{
		sum = sum|arr[k];
	}
	if(sum==0 && i==j)
	{
		cout<<"Anagaram";
	}
	else
	{
		cout<<"Not Anagram";
	}
return 0;
}

