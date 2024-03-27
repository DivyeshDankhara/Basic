#include <iostream>

using namespace std;

class array
{
    public:
    int f=-1,r=-1,number;
    void insert_rear(int a[],int n)
    {
        if(f==-1&&r==-1)
        {
            cout << "Enter number :-> ";
            cin >> number;
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
            cout << "Enter number :-> ";
            cin >> number;
            r++;
            a[r]=number;
        }
    }

    void insert_front(int a[],int n)
    {
        if(f==-1&&r==-1)
        {
            cout << "Enter number :-> ";
            cin >> number;
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
            cout << "Enter number :-> ";
            cin >> number;
            int v=r+1;
            for(int i=r;i>=0;i--)
            {
                a[v]=a[i];
                v--;
            }
            a[0]=number;
            r++;
        }
    }

    void dispaly_data(int a[])
    {
        for(int i=f;i<=r;i++)
        {
            cout << a[i] << ", " ;
        }
        cout << endl;
    }

    void delete_front(int a[])
    {
        if(f<0)
        {
            cout << "Array is Empty" << endl;
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

    void delete_rear(int a[])
    {
        if(f<0)
        {
            cout << "Array is Empty" << endl;
        }
        else if(r==f)
        {
            f=-1;
            r=-1;
        }
        else
        {
            r--;
        }
    }
};

int main()
{
    array obj;
    int n;
    cout << "Enter Array Length :-> ";
    cin >> n;
    int a[n];
    int num;
    do
    {
        cout << "1.Insert_rear" << endl;
        cout << "2.Insert_front" << endl;
        cout << "3.Delete_rear" << endl;
        cout << "4.Delete_front" << endl;
        cout << "5.Display" << endl;
        cout << "6.Exit" << endl;
        cin >> num;

        switch (num)
        {
        case 1:
            obj.insert_rear(a,n);
            break;

        case 2:
            obj.insert_front(a,n);
            break;

        case 3:
            obj.delete_rear(a);
            break;

        case 4:
            obj.delete_front(a);
            break;
        
        case 5:
            obj.dispaly_data(a);
            break;

        
        default:
            break;
        }
    } while (num!=6);
     


    return 0;
}