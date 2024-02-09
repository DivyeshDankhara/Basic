#include <iostream>

using namespace std;

int main()
{
    float income,tax;

    cout << "Enter your income :-> ";
    cin >> income;

    if(0<income&&income<=2500)
    {
        tax = income*0;
    }
    else if(2500<income&&income<=5000)
    {
        tax = (income-2500)*0.10;
    }
    else if(5000<income&&income<=10000)
    {   
        tax = 250+(income-5000)*0.20;
    }
    else if(income>10000)
    {
        tax = 1250+(income-10000)*0.30;
    }

    cout << "Tax is :-> " << tax;
}