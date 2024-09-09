#include <iostream>
using namespace std;
class Test
{public:
	int num;
	Test() : num(0) {}
	Test(int x) : num(x) {}

	void operator--()
	{
		num+=5;
	}
	void operator++()
	{
		num-=5;
	}
	void display()
	{
		cout<<num;
	}
};
int main()
{
	Test t1(7);
	++t1;
	t1.display();
	cout<<endl;
	--t1;
	t1.display();
}
