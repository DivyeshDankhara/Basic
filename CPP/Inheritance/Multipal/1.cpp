#include<iostream>

using namespace std;

class base1
{
    protected:
    int a1;

    public:
    void setdata1(int x1)
    {
        a1 = x1;
    }
};

class base2
{
    protected:
    int a2;

    public:
    void setdata2(int x2)
    {
        a2 = x2;
    }
};

class derived:public base1,public base2
{
    public:
    void show()
    {
        cout << "The value of 1 :-> " << a1 << endl;
        cout << "The value of 2 :-> " << a2 << endl;
        cout << "The sum of :-> " << a1+a2;
    }
};
int main()
{
    derived obj;
    obj.setdata1(10);
    obj.setdata2(20);
    obj.show();

    return 0;
}