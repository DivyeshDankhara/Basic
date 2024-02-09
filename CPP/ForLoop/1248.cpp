#include <iostream>

using namespace std;

int main()
{
    int n,i,a=1;

    cout << "Enter the number :-> "; 
    cin >> n;

    for(i=1;i<=n;i++)
    {
        cout << a << ",";
        a*=2;
    }
}