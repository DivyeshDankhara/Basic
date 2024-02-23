#include<iostream>

using namespace std;

class Arith_num
{
    int x,y;

    public:

    void adddata()
    {
        cout << "add x data";
        cin >> x;
        cout << "add y data";
        cin >> y;
    }

    void print()
    {
        cout << "Value ofm x: and y: " << x << y;
    }
};

int main()
{
    Arith_num x1[1];

    for(int i=0;i<3;i++)
    {
        x1[i].adddata();
    }

    for(int i=0;i<3;i++)
    {
        x1[i].print();
    }

    return 0;
}