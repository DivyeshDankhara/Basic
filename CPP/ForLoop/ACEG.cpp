#include <iostream>

using namespace std;

int main()
{
    int i;

    for(i='A';i<='Z';i++)
    {
        cout << char(i) << ",";
        i+=1;
    }
}