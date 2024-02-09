#include <iostream>

using namespace std;

int main()
{
    float n,a=0.5,b=0.5,c,i;

    cout << "Enter the number :-> ";
    cin >> n;
    cout << "0.5,";
    
    for(i=1;i<=n;i++)
    {
        c = a+b;
        cout << c << ",";
        a=c;
        b=b+1;
    }
}