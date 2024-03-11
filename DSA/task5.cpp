#include <iostream>
#include <stdlib.h>

using namespace std;

class arr
{
    public:
    int key;
    
    void check(int a[],int n)
    {
        int count=0;
        cout << "Enter number you check in array :-> ";
        cin >> key;
        for(int i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                cout << "Position :-> " << i << endl;
                count++;
                break;
            }
        }

        if(count==0)
        {
            cout << key << " this no not found in array";
        }
    }
};

int main()
{
    arr obj;
    int n;

    cout << "Enter the number :-> ";
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        a[i] = rand()%n+1;
    }

    for(int i=0;i<n;i++)
    {
        cout << a[i]<<", ";
    }
    cout << endl;

    obj.check(a,n);
}