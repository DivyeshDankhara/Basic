#include <iostream>

using namespace std;

int main()
{
    int n,a=0,b=1,c,i;

    cout << "Enter the number :-> ";
    cin >> n;
    cout << "1,";
    
    for(i=1;i<=n;i++)
    {
        c = a+b;
        cout << c << ",";
        a=b;
        b=c;
    }
}