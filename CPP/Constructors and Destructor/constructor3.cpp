// 3. Define a class TEST in C++ with following description:
// Private Members
// TestCode of type integer
// Description of type string
// NoCandidate of type integer
// CenterReqd (number of centers required) of type integer
// A member function CALCNTR() to calculate and return the number of centers as
// (NoCandidates/100+1)
// Public Members
// - A function SCHEDULE() to allow user to enter values for TestCode, Description,
// NoCandidate & call function CALCNTR() to calculate the number of Centres
// - A function DISPTEST() to allow user to view the content of all the data members
#include <iostream>

using namespace std;

class TEST
{
    private:

    int TestCode;
    string Description;
    int NoCandidate;
    int CenterReqd;

    int CALCNTR(int NoCandidate)
    {
        CenterReqd=(NoCandidate/100+1);
        return CenterReqd;
    }

    public:

    TEST();

    void DISPTEST()
    {
        cout << "TestCode :-> " << TestCode << endl;
        cout << "Description :-> " << Description << endl;
        cout << "NoCandidate :-> " << NoCandidate << endl;
        cout << "CenterReqd :-> " << CenterReqd << endl;
    }
};
TEST::TEST(void)
{
    cout << "Enter TestCode :-> ";
    cin >> TestCode;
    cin.ignore();
    cout << "Enter Description :-> ";
    getline(cin,Description);
    cout << "Enter NoCandidate :-> ";
    cin >> NoCandidate;

    CALCNTR(NoCandidate);
}
int main()
{
    TEST obj;
    obj.DISPTEST();
}