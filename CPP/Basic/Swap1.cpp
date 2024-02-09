#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "Enter the Value of A :-> ";
    cin >> a;
    cout << "Enter the Value of B :-> ";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "The Value of A is :-> " << a << endl;
    cout << "The Value of B is :-> " << b;
}