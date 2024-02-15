#include <iostream>

using namespace std;

class Construct
{
    private:

    int a,b;

    public:
    
    Construct(int x,int y)
    {
        a=x;
        b=y;
    };
    Construct(int x)
    {
        a=x;
        b=0;
    };

    void printdata()
    {
        cout << "Value a is :-> "<< a << endl;
        cout << "Value b is :-> "<< b << endl;
    }
};
int main()
{
    Construct a1(10,20);
    a1.printdata();

    Construct a2(30);
    a2.printdata();

    return 0;
}