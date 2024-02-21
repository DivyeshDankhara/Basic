#include <iostream>

using namespace std;

class num
{
    int a,b;

    public:

    num(){}

    num(int x,int y)
    {
        a = x;
        b = y;
    }

    num sum(num n1,num n2)
    {
        num result;
        result.a=n1.a+n2.a;
        result.b=n1.b+n2.b;

        return result;
    }

    void print()
    {
        cout << "The value of a :-> " << a << endl;
        cout << "The value of b :-> " << b << endl;
    }
    
};

int main()
{
    num n1(10,20),n2(5,15),n3;
    num ans;
    ans=n3.sum(n1,n2);
    ans.print();
    return 0;
}