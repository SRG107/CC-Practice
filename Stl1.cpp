#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    vector<int> v1(5, 10); // 5 elements with value 10
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << endl;

    vector<int> v2 = {1, 2, 3, 4, 5, 6};
    v2.max_size(); // maximum number of elements that can be stored in the vector
    vector<int>::iterator it; // iterator is a pointer
    it = v2.end(); 
    cout << *it << endl; // points to the next of the last element
    it = v2.end();
    cout << *(it - 1) << endl; // points to the last element
    for (it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    vector<int>::reverse_iterator it1;
    it1 = v2.rbegin();
    cout << *it1 << endl; // points to the last element
    it1 = v2.rend();
    cout << *(it1 - 1) << endl; // points to actual last element
    for (it1 = v2.rbegin(); it1 != v2.rend(); it1++)
    {
        cout << *it1 << " ";
    }
    return 0;
}