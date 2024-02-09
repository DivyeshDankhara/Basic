#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the age :-> ";
    cin >> n;;

    if(n>18)
    {
        cout << "You are eligible to vote";
    }
    else
    {
        cout << "You are not eligible to vote";
    }
}