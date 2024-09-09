#include <iostream>

using namespace std;

int main()
{
    int n,arr[100],i,j,x;
    cin>>n;
    int arr1[n],arr2[n];
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    // cout<<"My Cards : \t";
    // for(i=0;i<(n/2);i++)
    // {
    //     cout<<arr[i]<<" | ";
    // }
    // cout<<"Oppenets Cards : \t";
    // for(i=(n/2 + 1);i<n;i++)
    // {
    //     cout<<arr[i]<<" | ";
    // }
    for(i=1;i<2;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                arr1[j] = arr1[j]^arr1[j+1];
                arr1[j+1] = arr1[j]^arr1[j+1];
                arr1[j] = arr1[j]^arr1[j+1];
            }
            if(arr2[j]>arr2[j+1])
            {
                arr2[j] = arr2[j]^arr2[j+1];
                arr2[j+1] = arr2[j]^arr2[j+1];
                arr2[j] = arr2[j]^arr2[j+1];
            }
        }
    }
    // cout<<"\nMy largest is : "<<(arr[n/2 - 1]*10   + arr[n/2 - 2]);
    if((arr1[n-1]*10 + arr1[n-2]) > (arr2[n-1]*10 + arr2[n-2]))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

    return 0;
}
