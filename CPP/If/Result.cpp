#include <iostream>

using namespace std;

int main()
{
    float s1,s2,s3,s4,s5,total,per;

    cout << "Enter the mark Sub1 :-> ";
    cin >> s1;
    cout << "Enter the mark Sub2 :-> ";
    cin >> s2;
    cout << "Enter the mark Sub3 :-> ";
    cin >> s3;
    cout << "Enter the mark Sub4 :-> ";
    cin >> s4;
    cout << "Enter the mark Sub5 :-> ";
    cin >> s5;

    total = s1 + s2 + s3 + s4 + s5;
    cout << "Total :-> " << total << endl;
    per = total / 5;
    cout << "Percentage :-> " << per << endl;

    if(per>75)
    {
        cout << "Grade A";
    }
    else if(60<per&&per<=75)
    {
        cout << "Grade B";
    }
    else if(45<per&&per<=60)
    {
        cout << "Grade C";
    }
    else if(35<per&&per<=45)
    {
        cout << "Grade D";
    }
    else if(per<=35)
    {
        cout << "Fail";
    }
}