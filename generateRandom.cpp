/* 1. any ramdom no. , 2.random no. less than x , 3. random no. betw x and y  */

#include <iostream>
#include <cmath>
using namespace std;

void fun();
void fun(int x);
void fun(int x, int y);

int main()
{
	int l1,l2;
	cin>>l1;
	cin>>l2;
	fun();
	fun(l1);
	fun(l1,l2);
}

void fun()
{
	int n;
	n = rand();
	cout<<n<<endl;
}
void fun(int x)
{
	int n;
	n = (rand() % x);
	cout<<n<<endl;
}
void fun(int x, int y)
{
	int n;
	n = ((rand() % (y-x)) + x);
	cout<<n<<endl;
}
