// 1. Define a class student with the following specification
// Private members of class student
// admno integer
// sname 20 character
// eng. math, science float
// total float
// ctotal() a function to calculate eng + math + science with float return type.
// Public member function of class student
// Takedata() Function to accept values for admno, sname, eng, science and invoke
// ctotal() to calculate total.
// Showdata() Function to display all the data members on the screen

#include <iostream>

using namespace std;

class student
{
    private:
    int admno;
    char sname[20];
    float eng,math,sci;
    float total;

    float ctotal(float eng,float math,float sci)
    {
        total = eng + math + sci;
    }

    public:

    student();

    //void Takedata();

    void Showdata()
    {
        cout << "admno :-> " << admno << endl;
        cout << "student name :-> " << sname << endl;
        cout << "total :-> " << total << endl;
    }

    ~student()
    {
        cout << "Dealocat memory";
    }
};
student::student(void)
{
    cout << "Enter admno :-> ";
    cin >> admno;
    cin.ignore();
    cout << "Enter student name :-> ";
    gets(sname);
    cout << "Enter mark english :-> ";
    cin >> eng;
    cout << "Enter mark maths :-> ";
    cin >> math;
    cout << "Enter mark science :-> ";
    cin >> sci;

    ctotal(eng,math,sci);
}
int main()
{
    student data;
    //data.Takedata();
    data.Showdata();
}