#include <iostream>

using namespace std;

class employee
{
    private:
    int c,d;


    void oper(int g,int f)
    {
        c=g;
        d=f;
        
    }

    public:
    int a,b;
    void getevalue()
    {
        
        cout<< "enter the value of a :-> ";
        cin>>a;
        cout<< "enter the value of b :-> ";
        cin>>b;
    }
    void passvalue(int k,int j)
    {
        oper(k,j);
        cout << "the value of c is :-> " << c << endl;
        cout << "the value of d is :-> " << d << endl;
    }

};

int main()
{
    employee detail;
    
    detail.passvalue(30,40);
    detail.getevalue();

    return 0;
}
