#include <iostream>

using namespace std;

void area(int r=0,int a=0,int l=0,int w=0,int h=0,int b=0)
{
    float circle = 3.14*r*r;
    cout << "Area of circle :-> " << circle << endl;
    float squre = a*a;
    cout << "Area of squre :-> " << squre << endl;
    float rectangle = l*w;
    cout << "Area of rectangle :-> " << rectangle << endl;
    float triangle = (h*b)/2;
    cout << "Area of triangle :-> " << triangle << endl;
}

int main()
{
    int r,a,l,w,h,b;

    cout << "Enter the radius :-> ";
    cin >> r;

    cout << "Enter the length :-> ";
    cin >> a;

    cout << "Enter the length :-> ";
    cin >> l;
    cout << "Enter the width :-> ";
    cin >> w;

    cout << "Enter the height :-> ";
    cin >> h;
    cout << "Enter the base :-> ";
    cin >> b;

    area(r,a,l,w,h,b);
}