/* function findCount(int arr[], int length, int num, int diff) counts the no. of elements present in arr having absolute difference with num equal to or less than
  equal to diff, else return -1 */

#include <iostream>
using namespace std;
int findCount(int arr[], int length, int num, int diff);
int main()
{
	int arr[100],i,len,num,diff,r;
	cin>>len;
	for(i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	cin>>num;
	cin>>diff;
	r=findCount(arr,len,num,diff);
	if(r>0)
	{
		cout<<r;
	}
	else
	{
		cout<<"-1";
	}
return 0;
}

int findCount(int arr[], int length, int num, int diff)
{
	int R=0,i=0;
	while(i<length)
	{
		if(arr[i]>=(num-diff) && arr[i]<=(num+diff))
		{
			R++;
		}
		i++;
	}
return R;

}
