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

    float ctotal(int eng,int math,int sci)
    {
        total = eng+math+sci;
        return total;
    }

    public:

    void Takedata()
    {
        cout << "Enter admno :-> ";
        cin >> admno;
        cin.ignore();
        cout << "Enter sname :-> ";
        gets(sname);
        cout << "Enter the mark english :-> ";
        cin >> eng;
        cout << "Enter the mark maths :-> ";
        cin >> math;
        cout << "Enter the mark science :-> ";
        cin >> sci;

        ctotal(eng,math,sci);
    }

    void Showdata()
    {
        cout << "admno :-> " << admno << endl;
        cout << "sname :-> " << sname << endl;
        cout << "total :-> " << total << endl;
    }
};

int main()
{
    student obj;
    obj.Takedata();
    obj.Showdata();
}
