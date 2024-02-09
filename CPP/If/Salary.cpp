#include <iostream>

using namespace std;

int main()
{
    int salary,hra,da,grosssalary;

    cout << "Enter the salary :-> ";
    cin >> salary;

    if(salary<=5000)
    {
        hra = salary*0.08;
        da = salary*0.20;
    }
    else if(salary>5000 && salary<=10000)
    {
        hra = salary*0.12;
        da = salary*0.30;
    }
    else if(salary>10000 && salary<=15000)
    {
        hra = salary*0.15;
        da = salary*0.40;
    }
    else if(salary>15000)
    {
        hra = salary*0.20;
        da = salary*0.50;
    }

    cout << "Salary :-> " << salary << endl;
    cout << "Hra :-> " << hra << endl;
    cout << "Da :-> " << da << endl;

    cout << "Gross salary :-> " << salary+hra+da;
}