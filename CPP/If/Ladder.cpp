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

    if(a>b&&a>c)
    {
        cout << a << "is larger";
    }
    else if (b>c&&b>a)
    {
        cout << b << "is larger";
    }
    else
    {
        cout << c << "is larger";
    }
    
}