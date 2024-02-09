#include <iostream>

using namespace std;

int main()
{
    float inches,total;

    cout << "Enter the Inches you convert into Centimeter :-> ";
    cin >> inches;

    total = inches * 2.54;
    cout << "Inches into Centimeter is :-> " << total;
}