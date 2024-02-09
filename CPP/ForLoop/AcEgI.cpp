#include <iostream>

using namespace std;

int main()
{
    int i,a=65;

    for(i=1;i<=13;i++)
    {
        cout << char(a) << ",";
        if(i%2==1)
        {
            a = a+34;
        }
        else
        {
            a = a-30;
        }
    }
}