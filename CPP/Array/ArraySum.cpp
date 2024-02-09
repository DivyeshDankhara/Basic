#include <iostream>

using namespace std;

int main()
{
    int a[10],i,sum=0;

    for(i=1;i<=5;i++)
    {
        cout << "Enter value a[" << i << "] :-> ";
        cin >> a[i];
        sum+=a[i];
    }

    cout << "Sum of array :-> " << sum;
    
}