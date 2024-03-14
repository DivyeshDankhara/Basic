#include <iostream>

using namespace std;

class arr
{
    public:
    void sort(int a[],int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    swap(a[i],a[j]);
                }
            }
        }
    }

    void display(int a[],int n)
    {
        for(int i=0;i<n;i++)
        {
            cout << a[i] << ", ";
        }
        cout << endl;
    }
};

int main()
{
    arr obj;
    int n;

    cout << "Enter Array Range :-> ";
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100+1;
    }
    cout << "Unsorted Array" << endl;
    for(int i=0;i<n;i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    obj.sort(a,n);
    cout << "Sorted Array" << endl;
    obj.display(a,n);

    return 0;
}