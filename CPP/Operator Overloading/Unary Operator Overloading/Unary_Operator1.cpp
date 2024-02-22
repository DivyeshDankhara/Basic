#include<iostream>

using namespace std;

class Arith_num
{
    int x,y;

    public:

    Arith_num(int a,int b)
    {
        x = a;
        y = b;
    }

    Arith_num operator++(int)
    {
        x = x - (x*2);
        y = y - (y*2);
    }

    void print()
    {
        cout << "Value of x :-> " << x << endl;
        cout << "Value of y :-> " << y << endl;
    }
};

int main()
{
    Arith_num a(10,20),b(5,10);
    a++;
    a.print();
    b++;
    b.print();

    return 0;
}