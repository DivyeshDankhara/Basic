#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the number :-> ";
    cin >> n;

    if (0<n)
    {
        cout << n << " is positive";
    }
    else if(0>n)
    {
        cout << n << " is negative";
    }
    else
    {
        cout << n << " is zero";
    }
    
}