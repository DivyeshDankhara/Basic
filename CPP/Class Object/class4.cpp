// 4. Define a class in C++ with following description:
// Private Members
// A data member Flight number of type integer
// A data member Destination of type string
// A data member Distance of type float
// A data member Fuel of type float
// A member function CALFUEL() to calculate the value of Fuel as per the following criteria
// Distance Fuel
// <=1000 500
// more than 1000 and <=2000 1100
// more than 2000 2200
// Public Members
// A function FEEDINFO() to allow user to enter values for Flight Number, Destination,
// Distance & call function CALFUEL() to calculate the quantity of Fuel
// A function SHOWINFO() to allow user to view the content of all the data members
#include <iostream>

using namespace std;

class DETAIL
{
    int Flight_number;
    string Destination;
    float Distance;
    float Fuel;

    float CALFUEL(float Distance)
    {
        if(Distance<=1000)
        {
            Fuel = 500;
        }
        else if(Distance>1000&&Distance<=2000)
        {
            Fuel = 1100;
        }
        else if(Distance>2000)
        {
            Fuel = 2200;
        }
        return Fuel;
    }

    public:

    void FEEDINFO()
    {
        cout << "Enter the flight number :-> ";
        cin >> Flight_number;
        cin.ignore();
        cout << "Enter Destination :-> ";
        getline(cin,Destination);
        cout << "Enter Distance :-> ";
        cin >> Distance;

        CALFUEL(Distance);
    }

    void SHOWINFO()
    {
        cout << "Flight_Number :-> " << Flight_number << endl;
        cout << "Destinatio :-> " << Destination << endl;
        cout << "Distance :-> " << Distance << endl;
        cout << "Fuel needed:-> " << Fuel << endl;
    }
};

int main()
{
    DETAIL obj;
    obj.FEEDINFO();
    obj.SHOWINFO();
}