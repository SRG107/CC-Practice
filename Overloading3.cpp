#include <iostream>
using namespace std;

class Test
{public:
	int main(int x)
	{
		return x;
	}
};
int fun(int x, int y=0, int z=0) // due to default value funnction is expecting only one parameter from user
{
	return (x+y+z);
}
/*                   Defining this will cause ambiguity
int fun(int x)
{
	return x;
}
*/
int main() //main function can be overloaded in class only
{
	cout<<fun(10);
	Test t1;
	cout<<"\n";
	cout<<t1.main(30);
}
