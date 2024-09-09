#include <iostream>

using namespace std;

int main()
{
    int arr[100],n,j,x,temp=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        if(arr[i]&1 == 0)
        {
            x=arr[i];
            for(j=(i-1);j>=temp;j--)
            {
                arr[j+1] = arr[j];
            }
            arr[temp] = x;
            temp++;
        }
    }
    
    cout<<"separated array :\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" | ";
    }
    return 0;
}

