#include<iostream>

using namespace std;

class base
{
    public:

    int a=10;

    virtual void desplay()
    {
        cout << "The value of a is :-> " << a << endl;
    }
};

class derive : public base
{
    public:

    int b=20;

    void desplay()
    {
        cout << "The value of b is :-> " << b << endl;
    }
};

int main()
{
    base *pobj;
    derive obj2;
    pobj = &obj2;
    pobj->desplay();

    return 0;
}