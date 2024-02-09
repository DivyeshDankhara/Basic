#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "Enter the value 1 :-> ";
    cin >> a;
    cout << "Enter the value 2 :-> ";
    cin >> b;
    cout << "Enter the value 3 :-> ";
    cin >> c;

    if(a>b)
    {
        if(a>c)
        {
            cout << a << " is the largest number";
        }
    }
    else if(b>c)
    {
        cout << b << " is the largest number";
    }
    else
    {
        cout << c << " is the largest number";
    }

}