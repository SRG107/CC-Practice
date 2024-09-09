#include <iostream>

using namespace std;

int main()
{
    int n,arr[100],i,j,x;
    cin>>n;
    cout<<"\nwhich largest : ";
    cin>>x;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<x;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j] = arr[j]^arr[j+1];
                arr[j+1] = arr[j]^arr[j+1];
                arr[j] = arr[j]^arr[j+1];
            }
        }
    }
    cout<<x<<"th largest "<<arr[n-x];
    

    return 0;
}
