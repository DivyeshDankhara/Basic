#include <iostream>

using namespace std;

int main()
{
    int n,i,j;

    cout << "Enter the rows :-> ";
    cin >> n;

    i=1;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    
}