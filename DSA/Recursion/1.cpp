#include <iostream>

using namespace std;

int num(int n)
{
    cout << "Inside Function :-> " << n << endl;
    if(n<3)
    {
        num(++n);
    }
    cout << "Outside Function :-> " << n << endl;
}

int main()
{
    num(1);
}