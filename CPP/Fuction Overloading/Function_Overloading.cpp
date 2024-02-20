#include <iostream>

using namespace std;

void sum(double a,int b)
{
    cout << a+b << endl;
}
void sum(int a,int b)
{
    cout << a+b << endl;
}

int main()
{
    sum(10,20);
    sum(10.0,20);
}