// number from 0 to 100 crore
//print no. of vowels in textual representation of these numbers
//ex. 1234 -> one thousand two hundred thity four

#include <iostream>
using namespace std;
void D1text(int);
void D2text(int);
int main()
{

	int num,d;
	cin>>num;
	if(num/10000000)
	{
		d = num/10000000;
		D2text(d);
		if(d/10)
		{
			cout<<" crores";
		}
		else
		{
			cout<<" crore";
		}
		num = num%10000000;
	}
	if(num/100000)
	{
		d = num/100000;
		D2text(d);
		if(d/10)
		{
			cout<<" lakhs";
		}
		else
		{
			cout<<" lakh";
		}
		num = num%100000;
	}
	if(num/1000)
	{
		d = num/1000;
		D2text(d);
		if(d/10)
		{
			cout<<" thousands";
		}
		else
		{
			cout<<" thousand";
		}
		num = num%1000;
	}
	if(num/100)
	{
		d = num/100;
		D1text(d);
		cout<<" hundred";
		num = num%100;
	}
	D2text(num);
}

void D1text(int x)
{
	switch(x)
	{
		case 1: cout<<" one"; break;
		case 2: cout<<" two"; break;
		case 3: cout<<" three"; break;
		case 4: cout<<" four"; break;
		case 5: cout<<" five"; break;
		case 6: cout<<" six"; break;
		case 7: cout<<" seven"; break;
		case 8: cout<<" eight"; break;
		case 9: cout<<" nine"; break;
	}
}

void D2text(int n)
{
	if(n==0)
	{return;}
	else if(n<10)
	{D1text(n);}
	else if(n==10)
	{cout<<" ten";}
	else if(n>10 && n<20)
	{
		switch(n)
		{
		case 11: cout<<" eleven"; break;
		case 12: cout<<" twelve"; break;
		case 13: cout<<" thirteen"; break;
		case 14: cout<<" fourteen"; break;
		case 15: cout<<" fifteen"; break;
		case 16: cout<<" sixteen"; break;
		case 17: cout<<" seventeen"; break;
		case 18: cout<<" eighteen"; break;
		case 19: cout<<" nineteen"; break;
		}
	}
	else if(n>19 && n<=99)
	{
		int a=n/10,b=n%10;
		switch(a)
		{
		case 2: cout<<" twenty"; break;
		case 3: cout<<" thirty"; break;
		case 4: cout<<" fourty"; break;
		case 5: cout<<" fifty"; break;
		case 6: cout<<" sixty"; break;
		case 7: cout<<" seventy"; break;
		case 8: cout<<" eighty"; break;
		case 9: cout<<" ninety"; break;
		}
		D1text(b);
	}
}

