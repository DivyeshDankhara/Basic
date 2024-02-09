#include <iostream>

using namespace std;

int main()
{
    float a,r,t,total;

    cout << "Enter the Amount :-> ";
    cin >> a;
    cout << "Enter the Rate :-> ";
    cin >> r;
    cout << "Enter the Time :-> ";
    cin >> t;

    total = a * r * t / 100;

    cout << "Simple Interest is :-> " << total;
}