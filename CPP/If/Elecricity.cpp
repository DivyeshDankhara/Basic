#include <iostream>

using namespace std;

int main()
{
    float n ;

    cout << "Enter the electicity unit :-> ";
    cin >> n;

    if(n<=100)
    {
        n = (n*0.60)+50;
        if(n>300)
        {
            n = n+(n*0.15);
        }
    }
    else if(n<=200)
    {
        n = (60+((n-100)*.80))+50;
        if(n>300)
        {
            n = n+(n*0.15);
        }
    }
    else if(n>200)
    {
        n = (140+((n-200)*0.90))+50;
        if(n>300)
        {
            n = n+(n*0.15);
        }
    }

    cout << "Your bill is :-> " << n;
}