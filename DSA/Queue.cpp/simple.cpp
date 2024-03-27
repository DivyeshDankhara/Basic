#include <iostream>

using namespace std;

class arr
{
    public:
    int f=-1;
    int r=-1;
    int number;
    void insert_data(int a[],int n)
    {
        cout << "Enter the number :-> ";
        cin >> number;

        if(f==-1&&r==-1)
        {
            f++;
            r++;
            a[r]=number;
        }
        else if(r>n-2)
        {
            cout << "Array is Full" << endl;
        }
        else
        {
            r++;
            a[r]=number;
        }
    }

    void display_data(int a[],int n)
    {
        if(f==-1&&r==-1)
        {
            cout << "Array is Empty" << endl;
        }
        else
        {
            for(int i=f;i<=r;i++)
            {
                cout << a[i] << ", ";
            }
            cout << endl;
        }
    }

    void delete_data()
    {   
        if(f<0)
        {
            cout << "Array is Empty " << endl;
        }
        else if(f==r)
        {
            f=-1;
            r=-1;
        }
        else
        {
            f++;
        }
    }
};

int main()
{
    arr obj;
    int n,num;
    cout << "Enter Array Range :-> ";
    cin >> n;
    int a[n];

    do
    {
        cout << "1. Insert" << endl;
        cout << "2. Display" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Exit" << endl;
        cin >> num;

        switch (num)
        {
        case 1:
            obj.insert_data(a,n);
            break;

        case 2:
            obj.display_data(a,n);
            break;
        
        case 3:
            obj.delete_data();
            break;

        default:
            break;
        }
    } while (num!=4);
    


    return 0;
}