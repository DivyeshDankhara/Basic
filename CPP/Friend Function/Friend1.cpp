#include <iostream>

using namespace std;

class Complex
{
    int a,b;
    friend Complex sumNumber(Complex o1,Complex o2);

    public:

    void setNumber(int x,int y)
    {
        a = x; 
        b = y;
    }

    void printdata()
    {
        cout << "Youre number is :-> " << a << "+" << b << endl;
    }
};
Complex sumNumber(Complex o1,Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    Complex c1,c2,sum;

    c1.setNumber(1,4);
    c1.printdata();

    c2.setNumber(4,8);
    c2.printdata();

    sum=sumNumber(c1,c2);
    sum.printdata();

    return 0;
}