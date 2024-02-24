#include<iostream>

using namespace std;

class Base 
{
    int salary;

    public:
    int bonus,total; 
    void addsalary(int salary1)
    {
        salary = salary1;
    }

    void totalsalary()
    {
        total = salary + bonus; 
    }
};

class Derive:public Base
{
    public:
    void addbonus(int bonus1)
    {
        bonus = bonus1;
    }
};

int main()
{
    Derive obj;
    obj.addsalary(10000);
    obj.addbonus(5000);
    obj.totalsalary();
    cout << "Total Salary :-> " << obj.total;

    return 0;
}