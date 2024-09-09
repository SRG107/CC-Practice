/* diffeenceofSum(n, m) accepts num and, m which ranges from 1 to m. we need to sum all no. that are divisible by num
and also not divisible by num and find their absolute difference   */

#include <iostream>
int differenceofSum(int n, int m);
using namespace std;
int main()
{
	int num,range,r;
	cin>>num;
	cin>>range;
	r=differenceofSum(num,range);
	cout<<"\n"<<r;
return 0;
}

int differenceofSum(int n,int m)
{
	int R,Wsum,Dnum,Dsum;
	Wsum = (m*(m+1)/2); // sum of numbers from 1 to m
	Dnum = m/n; // number of elements divisible by n
	Dsum = (n * (Dnum*(Dnum+1)/2)); // sum of the elements divisible by n
	R = Wsum - (2*Dsum); // ex. T=100,A=40,B=60 : A-B=20 ==> 100-(2*A)=20
return R;
}
