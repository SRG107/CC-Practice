#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int l {0}, h{0}, sq {0};
    cout<<"Enter length and height separated by space : ";
    cin>>l>>h;
    cout<<endl;
    
    int ar {l*h};
    while(ar)
    {
        int psq = sqrt(ar);
        ar -= psq*psq;
        sq++;
    }
    cout<<sq;
    return 0;
}