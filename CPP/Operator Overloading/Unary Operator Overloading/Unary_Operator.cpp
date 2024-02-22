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

    Arith_num operator-()
    {
        x--;
        y--;
    }

    void print()
    {
        cout << "Value of x :-> " << x << endl;
        cout << "Value of y :-> " << y;
    }
};

int main()
{
    Arith_num a(8,9);
    -a;
    a.print();

    return 0;
}