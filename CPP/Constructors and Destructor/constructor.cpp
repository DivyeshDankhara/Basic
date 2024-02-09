#include <iostream>

using namespace std;

class Deploy
{
    int a,b;

    public:

    Deploy(void);
    void printfData()
    {
        cout << "Value a is :-> " << a << endl;
        cout << "Value b is :-> " << b << endl;
    }

    ~Deploy()
    {
        cout << "Deallocate memory";
    }
};

Deploy::Deploy(void)
{
    a=10;
    b=0;
}

int main()
{
    Deploy data;
    data.printfData();
    return 0;
}