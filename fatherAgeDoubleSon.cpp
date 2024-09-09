#include <iostream>

using namespace std;

int main()
{
    int F,S,x;
    cout<<"Father Age : ";
    cin>>F;
    cout<<"\nSon Age : ";
    cin>>S;
    x = F-S;
    if(x<S)
    {
        cout<<"\nThe Age was double before "<<x<<"Years";
    }
    else if(x>S)
    {
        cout<<"\nThe Age will be double aftee "<<x<<"Years";
    }
    else
    {
        cout<<"\nThe Age is double now ";
    }
    return 0;
}
