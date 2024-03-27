#include <iostream>

using namespace std;

class arr
{
    public:
    int f=-1;
    int r=-1;
    int num;
    void insert_data(int a[],int n)
    {   
        if((r+1)%n==f)
        {
            cout << "Array is Full" << endl;
        }
        else if(f==-1&&r==-1)
        {
            cout << "Enter the Number :-> ";
            cin >> num;
            f++;
            r++;
            a[r]=num;
        }
        else
        {
            cout << "Enter the Number :-> ";
            cin >> num;
            r=(r+1)%n;
            a[r]=num;
        }
    }

    void display_data(int a[],int n)
    {   
        if(f>=0)
        {
            int i=f;
            for(i=f;i!=r;i=(i+1)%n)
            {
                cout << a[i] << ", ";
            }    
            cout << a[i] << ", ";
            cout << endl;
        }
        else
        {
            cout << "Array is Empty" << endl;
        }
        
    }

    void delete_data(int n)
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
            f=(f+1)%n;
        }
    }
};
int main()
{
    arr obj;
    int n;
    cout << "Enter Array Range :-> ";
    cin >> n;
    int a[n];
    int number;

    do
    {
        cout << "1.Insert" << endl;
        cout << "2.Display" << endl;
        cout << "3.Delete" << endl;
        cout << "4.Exit" << endl;
        cin >> number;

        switch (number)
        {
        case 1:
            obj.insert_data(a,n);
            break;
        
        case 2:
            obj.display_data(a,n);
            break;

        case 3:
            obj.delete_data(n);
            break;

        default:
            break;
        }
    } while (number!=4);
    

    return 0;
}