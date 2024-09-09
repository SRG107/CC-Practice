// given no. of trains and their arraival time & stoppage time, find minimum no. of platforms to accomodate them

#include <iostream>
using namespace std;

int main()
{
	int N,A[1000],S[1000],p=0,j,i,sum,k=0;
	cin>>N;
	cout<<endl;
	for(i=0;i<N;i++)
	{
		cin>>A[i]>>S[i];
		S[i] = A[i]+S[i];
	}
	int minA=A[0],maxS=S[0]; // finding the total time interval for which the station will be busy
	for(i=0;i<N;i++)
	{
		if(A[i]<minA)
		{
			minA=A[i];
		}
		if(S[i]>maxS)
		{
			maxS=S[i];
		}
	}
	//cout<<"\n"<<minA<<"\t"<<maxS<<"\n"<<endl; //check if minA and maxS are correct
	for(i=minA;i<=maxS;i++) // 'i' varies from minimum arraival time to maximum departure time
	{
		sum=0;
		for(j=0;j<N;j++)
		{
			if(i>=A[j] && i<=S[j]) // checking at a particular time how may trains are present
			{
				sum++;
			}
		}
		if(sum>p)
		{
			p=sum;
		}
	}
	cout<<"\n"<<p; // maximum no. of platforms
}

