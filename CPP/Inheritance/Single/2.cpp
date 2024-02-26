#include<iostream>

using namespace std;

class Student
{
    string sname;
    int roll_no;


    public:
    void getdata(string name,int rno)
    {
        sname = name;
        roll_no = rno;
    }

    void printdata()
    {
        cout << "Student name :-> " << sname << endl;
        cout << "Roll no :-> " << roll_no << endl;
    }
};
class Exam:public Student
{
    int mark[5];

    public:
    void getmarks(int marks[])
    {
        for(int i=0;i<5;i++)
        {
            mark[i] = marks[i];
        }
    }

    void printdata1()
    {
        float total,per;
        for(int i=0;i<5;i++)
        {
            total = total + mark[i];
        }
        for(int i=0;i<5;i++)
        {
            cout << "sub" << i+1 << " marks is :-> " << mark[i] << endl;
        }
        per = total/5;
        cout << "Percentage is :-> " << per;
    }
}; 
int main()
{
    Exam obj;
    string name;
    int roll_no;
    int marks[5];

    cout << "Enter the student name :-> ";
    getline(cin,name);
    cout << "Enter roll no :-> ";
    cin >> roll_no;

    obj.getdata(name,roll_no);
    
    for(int i=0;i<5;i++)
    {
        cout << "Enter the marks sub" << i+1 << " :-> ";
        cin >> marks[i];
    }

    obj.getmarks(marks);
    obj.printdata();
    obj.printdata1();

    return 0;
}