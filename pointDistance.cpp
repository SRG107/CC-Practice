#include <iostream>
#include <cmath>
using namespace std;

class Point
{
		int x,y;
	public:
		Point() {}
		Point(int a, int b) : x(a), y(b) {}
		friend int operator<(Point& o1, Point& o2);
		void display()
		{
			cout<<"("<<x<<","<<y<<")";
		}
};

		int operator<(Point& o1, Point& o2)
		{
			int j,k;
			j = sqrt(o1.x*o1.x + o1.y*o1.y);
			k = sqrt(o2.x*o2.x + o2.y*o2.y);
			if(j>k)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
int main()
{
	Point p1(1,1),p2(2,2);
	int r = p1 < p2;
	//cout<<r;
	if(r==0)
	{
		p2.display();
	}
	else
	{
		p1.display();
	}
}
