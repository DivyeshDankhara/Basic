#include <iostream>

using namespace std;

int main()
{
    char n;

    cout << "Enter the char :-> ";
    cin >> n;

    if(n>=65&&n<=90)
    {
        cout << n << ":-->" << char(n+32);
    }
    else if(n>=97&&n<=122)
    {
        cout << n << ":-->" << char(n-32);
    }
}