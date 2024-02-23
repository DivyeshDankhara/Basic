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

    int operator+(num n2)
    {
        num result;
        
        if(a==n2.a&&b==n2.b)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void print()
    {
        cout << "The value of a :-> " << a << endl;
        cout << "The value of b :-> " << b << endl;
    }
    
};

int main()
{
    num n1(10,20),n2(10,20);
    int ans;
    ans=n1+n2;

    cout << ans;
    return 0;
}