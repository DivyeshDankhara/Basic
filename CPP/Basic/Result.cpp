#include <iostream>

using namespace std;

int main()
{
    float s1,s2,s3,total,per;

    cout << "Enter the mark Sub1 :-> ";
    cin >> s1;
    cout << "Enter the mark Sub2 :-> ";
    cin >> s2;
    cout << "Enter the mark Sub3 :-> ";
    cin >> s3;

    total = s1 + s2 + s3;
    per = total / 3;

    cout << "Total Marks :-> " << total << endl;
    cout << "Percentage :-> " << per;
}