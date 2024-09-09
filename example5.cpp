/* get 2 strings from user, one is bigger than other, find if smaller string is present in bigger one or not. if it is present then from which position does it start */

#include <iostream>
using namespace std;
int main()
{
	string str1,str2;
	int i,j,pos;
	cin>>str1;
	cout<<"\n";
	cin>>str2;
	i=0;
	j=0;
	while(str1[i]!='\0') //traversing big string
	{
		if(str1[i]==str2[j])  //only if first character matches
		{
			pos = i;      //first matching character position
			while(str2[j]!='\0') //now traversing both small and big string 
			{
				if(str1[i]!=str2[j])  //if any character inbetween is not same
				{
					j=0;  //to traverse the small string again from beginning
					i=pos;// resume comparing the character from big string from the position
					break; //breaking inner while loop
				}
				i++;
				j++;
			}
			if(str2[j]=='\0') //small string ended and all characters matched
			{
				cout<<"\nString is present strating from position "<<pos+1;
				i--; // now it will not show both printing lines
				break; // breaking outer while loop
			}
		}
		i++;
	}
	if(str1[i]=='\0')
	{
		cout<<"\nString is not present ";
	}

return 0;
}
