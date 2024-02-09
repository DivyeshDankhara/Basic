#include <iostream>

using namespace std;

int main()
{
    int n,i;

    cout << "Enter the number :-> ";
    cin >> n;

    for(i=n;i>=-n;i--)
    {
        cout << i << " ";
    }
}