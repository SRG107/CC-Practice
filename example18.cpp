// 'N' no. of elements and 'K' is the difference, a no. is happy if there exist at least one element in range
// [X-K,X+K]

#include <iostream>
using namespace std;

int main()
{
	int N,K,A[1000],H[1000]={0},i,j;
	cin>>N>>K;
	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(i=0;i<N;i++)
	{
		if(H[i]==0)
		{
			for(j=i+1;j<N;j++)
			{
				if(A[j]>=A[i]-K && A[j]<=A[i]+K)
				{
					H[i]=1;
					H[j]=1;
				}
			}
		}
	}
	for(j=0;j<N;j++)
	{
		if(H[j]==1)
		{
			cout<<A[j]<<"\t";
		}
	}
}
