#include <iostream>

using namespace std;

int factorial(int number)
{
    if(number>=1)
    {
        return number*factorial(number-1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int number;

    cout << "Enter the Number :-> ";
    cin >> number;
    int ans=factorial(number);
    cout << "Factorial of Number :-> " << ans << endl;
}