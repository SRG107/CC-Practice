#include <iostream>
using namespace std;

int main()
{
	int ival = 555;
	double dval = 666;
	string istr = "333";
	string dstr = "444.567";

	string s1 = to_string(ival);
	cout<<"\nival "<<ival<<" changed to string - "<<s1<<endl;
	string s2 = to_string(dval);
	cout<<"\ndval "<<dval<<" changed to string - "<<s2<<endl;
	
	cout<<"\nVerified by + operator "<<s1+s2<<endl;

	int i = stoi(istr);
	cout<<"\nVerified by + operator "<<i+i<<endl;
	double d = stoi(dstr);
	cout<<"\nVerified by + operator "<<d+d<<endl;
}
