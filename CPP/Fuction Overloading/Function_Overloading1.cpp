#include <iostream>

using namespace std;

void convert(int dollar)
{
    float total = dollar*82;
    cout << "Dollar into Ruppes is :-> " << total << endl;
}
void convert(float feet)
{
    float total = feet*12;
    cout << "Feet into Inches is :-> " << total << endl;
}
void convert(double inches)
{
    float total = inches*2.54;
    cout << "Inches into Centimeter :-> " << total << endl;
}
void convert(float celsius,int a)
{
    float total = ((float)celsius*(9.0/5)+32.0);
    cout << "Celsius into Fahrenheit :-> " << total << endl;
}

int main()
{
    int dollar;
    cout << "Enter the Dollar you convert into Ruppes :-> ";
    cin >> dollar;
    convert(dollar);

    float feet;
    cout << "Enter the Feet you convert into Inches :-> ";
    cin >> feet;
    convert(feet);

    double inches;
    cout << "Enter the Inches you convert into Centimeter :-> ";
    cin >> inches;
    convert(inches);

    float celsius;
    cout << "Enyter the Celsius you convert into Fahrenheit :-> ";
    cin >> celsius;
    convert(celsius,0);
}