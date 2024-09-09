#include <iostream>
using namespace std;

int main()
{
    int n1,n2,a,b,c=0,cy=0;
    cin>>n1;
    cin>>n2;
    while(n1 && n2)
    {
        a = n1%10;
        b = n2%10;
        if((a+b+cy) > 9)
        {
            c++;
            cy=1;
        }
        else
        {
            cy=0;
        }
        n1 = n1/10;
        n2 = n2/10;
    }
    cout<<c;
}
