#include <iostream>
using namespace std;

void add2num(int, int);
void add2num(double, double);
void add2num(float, float);

int main()
{
	add2num(12,15);
	add2num(12.9,15.78); // by default Dtype of fractions is double
	add2num(15.34f,10.91f); // f at the end indicates that it is floating point number
}

void add2num(int a, int b)
{
	cout<<" Int Addition is : "<<a+b<<endl;
}
void add2num(double a, double b)
{
	cout<<"Double Addition is : "<<a+b<<endl;
}
void add2num(float a, float b)
{
	cout<<"Float Addition is : "<<a+b<<endl;
}
