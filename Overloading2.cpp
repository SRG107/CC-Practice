#include <iostream>
using namespace std;

void swap(int, int);
void swap(float, float);
void swap(double, double);
void swap(char, char);
void swap(string, string);

int main()
{
	swap(10,20);
	swap(10.5f,20.5f);
	swap(15.2,30.4);
	swap('A','Z');
	swap("ABC","XYZ");
}



void swap(int a, int b)
{
	a = a^b;
	b = a^b;
	a = a^b;
	cout<<a<<" "<<b<<endl;
}
void swap(float a, float b)
{
	float temp;
	temp = a;
	a = b;
	b = temp;
	cout<<a<<" "<<b<<endl;
}
void swap(char a, char b)
{
	a = a^b;
	b = a^b;
	a = a^b;
	cout<<a<<" "<<b<<endl;
}
void swap(string a, string b)
{
	string temp;
	temp = a;
	a = b;
	b = temp;
	cout<<a<<" "<<b<<endl;
}
void swap(double a, double b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout<<a<<" "<<b<<endl;
}
