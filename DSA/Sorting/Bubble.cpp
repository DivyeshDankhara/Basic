#include <iostream>

using namespace std;

class bubble
{
    public:

    void sort(int a[],int n)
    {
        int l,r,temp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                
                if(a[j]>a[j+1])
                {
                    // temp=a[j];
                    // a[j]=a[j+1];
                    // a[j+1]=temp;
                    swap(a[j],a[j+1]);
                }
            }
        }
        cout << "Sorted Array" << endl;
        for(int i=0;i<n;i++)
        {
            cout << a[i] << ", ";
        }
        cout << endl;
    }
};

int main()
{
    bubble obj;

    int n;
    cout << "Enter the range of Array :-> ";
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        a[i]=rand()%n+1;
    }

    cout << "Unsorted Arrat" << endl;

    for(int i=0;i<n;i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    obj.sort(a,n);

    return 0;
}