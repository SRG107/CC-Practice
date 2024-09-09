#include <iostream>
using namespace std;

class Test
{
	int num;
	public:
		Test() : num(0) {}
		Test(int x) : num(x) {}
		void operator+(Test obj)
		{
			cout<<num+obj.num;
		}
};

int main()
{
	Test t1(15),t2(20);
	t1+t2;
}
