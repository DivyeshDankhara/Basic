#include <iostream>

using namespace std;

int main()
{
    int n,i,sum=0;

    cout << "Enter the number :-> ";
    cin >> n;

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }

    cout << "The sum of even number is :-> " << sum;
}