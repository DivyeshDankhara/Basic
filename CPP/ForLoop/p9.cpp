#include <iostream>

using namespace std;

int main()
{
    int n,i,j,a=65;

    cout << "Enter the rows :-> ";
    cin >> n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << char(a);
            a+=1;
        }
        cout << endl;
    }
}