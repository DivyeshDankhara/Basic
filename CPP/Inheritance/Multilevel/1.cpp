#include<iostream>

using namespace std;

class student_details
{
    public:
    int roll_no;
    string name;

    void printdata1(int rollno,string name)
    {
        cout << "Roll_no :-> " << roll_no << endl;
        cout << "Student name :-> " << name << endl;
    }
};

class student_marks : public student_details
{
    public:
    float marks[5];
    float total=0;
    float per;

    float printdata2(float mark[])
    {
        for(int i=0;i<5;i++)
        {
            marks[i] = mark[i];
        }
        for(int i=0;i<5;i++)
        {
            cout << "Subject" << i+1 << " mark :-> " << marks[i] << endl;
            total = total+marks[i];
        }
        cout << "Total is :-> " << total << endl;
        per = total/5;
        cout << "Percentage is :-> " << per << endl;


        return per;
    }
};

class student_grade : public student_marks
{
    public:

    void printdata3()
    {
        if(per>90)
        {
            cout << "Grade is A";
        }
        else if(per>80 && per<91)
        {
            cout << "Grade is B";
        }
        else if(per>60 && per<81)
        {
            cout << "Grade is C";
        }
        else if(per>40 && per<61)
        {
            cout << "Grade is D";
        }
        else if(per<41)
        {
            cout << "Fail";
        }
    }
};

int main()
{
    student_grade obj;
    int rollno;
    string name;
    float mark[5],total;

    cout << "Enter student roll_no :-> ";
    cin >> rollno;
    cin.ignore();
    cout << "Enter student name :-> ";
    getline(cin,name);

    for(int i=0;i<5;i++)
    {
        cout << "Enter mark Subject" << i+1 << " :-> ";
        cin >> mark[i];
    }


    obj.printdata1(rollno,name);
    obj.printdata2(mark);
    obj.printdata3();

    return 0;
}