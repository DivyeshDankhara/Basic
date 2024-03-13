#include<iostream>

using namespace std;

int top=-1;

class arr
{
    public:
    void InsertEnd(int a[],int n)
    {
        int number;
        cout << "Enter the number :-> ";
        cin >> number;
        top++;
        a[top]=number;
        if(top>n-2)
        {
            cout << "Top is full\n";
        }
    }

    void display(int a[])
    {
        for(int i=0;i<=top;i++)
        {
            cout << "a[" << i << "] :-> " << a[i] << endl;
        }
        if(top<0)
        {
            cout << "Empty\n";
        }
    }

    void deleteEnd(int a[])
    { 
        if(top<0)
        {
            cout << "Empty\n";
        }
        else
        {
            top--;
            cout << "Delete Successfuly\n";    
        }
    }
};

int main()
{
    arr obj;
    int num,n;
    cout << "Enter the Array range :-> ";
    cin >> n; 
    int a[n];
    do
    {
        cout << "1. Insert" << endl;
        cout << "2. Dispaly" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Exit" << endl;
        cin >> num;

        switch (num)
        {
        case 1:
            obj.InsertEnd(a,n);
            break;

        case 2:
            obj.display(a);
            break;

        case 3:
            obj.deleteEnd(a);
            break;
            
        
        default:
            break;
        }
    } while (n!=4);
    
}