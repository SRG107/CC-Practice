#include <iostream>
using namespace std;

class Date
{
		int dd,mm,yy;
	public:
		Date() {}
		Date(int x, int y, int z) : dd(x), mm(y), yy(z) {}
		friend ostream& operator<<(ostream& os, Date& obj); // we need to return the 'output' type value 
		friend istream& operator>>(istream& is, Date& obj); //// we need to return the 'input' type value
};

                ostream& operator<<(ostream& os, Date& obj)
		{
			os << obj.dd << "/" << obj.mm << "/" << obj.yy;
			return os;
		}
		istream& operator>>(istream& is, Date& obj)
		{
			is >> obj.dd >> obj.mm >>  obj.yy;
			return is;
		}

int main()
{
	Date d1;
	cin >> d1; // we called '>>' function
	cout << d1;  // we called '<<' function 
}
