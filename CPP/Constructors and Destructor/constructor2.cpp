// 2. Define a class batsman with the following specifications:
// Private members:
// bcode 4 digits code number
// bname 20 characters
// innings, notout, runs integer type
// batavg it is calculated according to the formula –
// batavg =runs/(innings-notout)
// calcavg() Function to compute batavg
// Public members:
// readdata() Function to accept value from bcode, name, innings, notout and
// invoke the function
// calcavg() to calculate.
// displaydata() Function to display the data members on the screen.
#include <iostream>

using namespace std;

class batsman
{
    private:

    int bcode;
    char bname[20];
    int innings,notout,runs;
    float batavg;

    float calcavg(int runs,int innings,int notout)
    {
        batavg = runs/(innings-notout);
    }

    public:

    batsman();

    void displaydata()
    {
        cout << "bcode :-> " << bcode << endl;
        cout << "bname :-> " << bname << endl;
        cout << "innings :-> "<< innings << endl;
        cout << "notout :-> "<< notout << endl;
        cout << "runs :-> " << runs << endl;
        cout << "Bats man average :-> "<< batavg << endl;
    }
};
batsman::batsman(void)
{
    cout << "Enter the bcode :-> ";
    cin >> bcode;
    cin.ignore();
    cout << "Enter the bname :-> ";
    gets(bname);
    cout << "Enter the innings :-> ";
    cin >> innings;
    cout << "Enter the number notout matches :-> ";
    cin >> notout;
    cout << "Enter the runs :-> ";
    cin >> runs;

    calcavg(runs,innings,notout);
}

int main()
{
    batsman obj;
    obj.displaydata();
}