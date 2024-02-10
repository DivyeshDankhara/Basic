#include <iostream>

using namespace std;

class employee
{
    private:
    
    int c,d;
    void detailshow(int c1,int d1);

    public:

    int a,b;
    void print()
    {
        cout << "Value a is :-> " << a << endl;
        cout << "Value b is :-> " << b << endl;
        detailshow(a,b);
        cout << "Value c is :-> " << c << endl;
        cout << "Value d is :-> " << d << endl;
    }
};
void employee::detailshow(int c1,int d1)
{
    c = c1;
    d = d1;
}

int main()
{
    employee detail;
    detail.a=10;
    detail.b=20;
    detail.print();

    return 0;
}