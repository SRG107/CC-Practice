#include <iostream>

using namespace std;

int main()
{
    int arr[100],even[100],odd[100],n,e=0,o=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        cout<<"\t";
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        if(arr[i]&1)
        {
            odd[o]=arr[i];
            o++; 
        }
        else
        {
          even[e]=arr[i];
            e++; 
        }
    }
    cout<<"Even No. : "<<e<<"\n";
    cout<<"Odd No. : "<<o<<"\n";
    cout<<"Enen Array : \n";
    for(i=0;i<e;i++)
    {
        cout<<even[i]<<" | ";
    }
    cout<<"Odd Array : \n";
    for(i=0;i<o;i++)
    {
        cout<<odd[i]<<" | ";
    }
    
    cout<<"separated array :\n";
    for(i=0;i<e;i++)
    {
       arr[i]=even[i];
    }
    for(i=0;i<o;i++)
    {
        arr[i+e]=odd[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" | ";
    }
    return 0;
}
