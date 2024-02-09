#include <iostream>

using namespace std;

int main()
{
    int n,i,j;

    cout << "Enter the rows :-> ";
    cin >> n;

    i=1;
    do
    {
        j=1;
        do
        {
            cout << j;
            j++;
        } while (j<=i);
        cout << endl;
        i++;
    } while (i<=n);
    
}