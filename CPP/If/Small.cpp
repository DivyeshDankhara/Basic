#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cout << "Enter number 1 :-> ";
    cin >> a;
    cout << "Enter number 2 :-> ";
    cin >> b;

    if (a>b)
    {
        cout << b << " is small";
    }
    else if(b>a)
    {
        cout << a << " is small";
    }
    else
    {
        cout << a << " and " << b << " are equal";
    }
    
}