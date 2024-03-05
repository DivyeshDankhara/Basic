#include<iostream>

using namespace std;

class Employee
{
    int id;
    static int count;

    public:
    void setdata()
    {
        cout << "Enter the id :-> ";
        cin >> id;
        count ++;
    }
    void printdata()
    {
        cout << "The id of employee :-> " << id << endl;
    }
    static void getcount()
    {
        cout << "count is :-> " << count << endl;
    }
};
int Employee :: count;
int main()
{
    Employee rohan,sohan,mohan;

    rohan.setdata();
    rohan.printdata();
    rohan.getcount(); 

    sohan.setdata();
    sohan.printdata();
    Employee::getcount();

    mohan.setdata();
    mohan.printdata();
    Employee::getcount();

    return 0;   
}