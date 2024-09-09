#include <iostream>
using namespace std;

class CalculateArea
{
	public:
		void area(int r, char s)
		{
			if(s == 'C')
			{
				cout<<"Area of circle is : "<<(3.14*r*r)<<endl;
			}
			if(s == 'S')
			{
				cout<<"Area of square is : "<<(r*r)<<endl;
			}
		}
		void area(int a, int b)
		{
			cout<<"Area of reactange is : "<<(a*b)<<endl;
		}
		void area(int a, int b, int c)
		{
			cout<<"Area of traiange is : "<<(b*c*0.5)<<endl;
		}
		void perimeter(int r, char s)
		{
			if(s == 'C')
			{
				cout<<"Perimeter of circle is : "<<(3.14*r*2)<<endl;
			}
			if(s == 'S')
			{
				cout<<"Perimeter of square is : "<<(r*4)<<endl;
			}
		}
		void perimeter(int a, int b)
		{
			cout<<"perimeter of reactange is : "<<(2 * (a+b))<<endl;
		}
		void perimeter(int a, int b, int c)
		{
			cout<<"Preiemter of traiange is : "<<(a+b+c)<<endl;
		}
};

int main()
{
	CalculateArea x;
	x.area(4,'S');
	x.area(4,'C');
}
