#include <iostream>

using namespace std;

int main()
{
    float h,b,area;

    cout << "Enter the Height :-> ";
    cin >> h;
    cout << "Enter the Base :-> ";
    cin >> b;

    area = h * b / 2;

    cout << "Area of Triangle is :-> " << area;
}