#include <iostream>

using namespace std;

int main()
{
    int n,arr[100],i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            if(arr[j]<arr[j+1])
            {
                arr[j] = arr[j]^arr[j+1];
                arr[j+1] = arr[j]^arr[j+1];
                arr[j] = arr[j]^arr[j+1];
            }
        }
    }
    cout<<"Sorted list : \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    

    return 0;
}
