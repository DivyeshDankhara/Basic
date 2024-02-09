// 6. Define a class REPORT with the following specification:
// Private members :
// adno 4 digit admission number
// name 20 characters
// marks an array of 5 floating point values
// average average marks obtained
// GETAVG() a function to compute the average obtained in five subject
// Public members:
// READINFO() function to accept values for adno, name, marks. Invoke the function
// GETAVG()
// DISPLAYINFO() function to display all data members of a report on the screen.
// You should give function definitions.
#include <iostream>

using namespace std;

class REPORT
{
    private:
    
    int adno;
    char name[20];
    float marks[5];
    float average;

    float GETAVG(float marks[])
    {
        float total=0;
        for(int i=0;i<5;i++)
        {
            total+=marks[i];
        }

        average = total/5;
        return average;
    }

    public:

    void READINFO()
    {
        cout << "Enter adno :-> ";
        cin >> adno;
        cin.ignore();
        cout << "Enter name :-> ";
        gets(name);
        for(int i=0;i<5;i++)
        {
            cout << "Enter marks subject" << i+1 << " :-> ";
            cin >> marks[i];
        }

        GETAVG(marks);
    }

    void DISPLAYINFO()
    {
        cout << "abno :-> " << adno << endl;
        cout << "student name :-> " << name << endl;
        cout << "Average is :-> " << average << endl;
    }
};

int main()
{
    REPORT obj;
    obj.READINFO();
    obj.DISPLAYINFO();
}