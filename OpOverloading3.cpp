#include <iostream>
using namespace std;

class Percentage
{
	float num;
	public:
		Percentage() : num(0) {}
		Percentage(int x) : num(x) {}
		void operator%(Percentage obj)
		{
			cout<<(num/obj.num)*100<<"\n";
		}
};

int main()
{
	Percentage p1(33),p2(100);
	p1 % p2;
}
