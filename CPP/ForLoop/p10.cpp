#include <iostream>

using namespace std;

int main()
{
    int n,i,j,a;

    cout << "Enter the rows :-> ";
    cin >> n;

    for(i=1;i<=n;i++)
    {
        a=n;
        for(j=1;j<=i;j++)
        {
            cout << a-i+1;
            a++;
        }
        cout << endl;
    }
}