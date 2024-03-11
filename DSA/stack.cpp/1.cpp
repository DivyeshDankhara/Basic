#include<iostream>

using namespace std;

int a[10];
int top=-1;

class arr
{
    public:
    void InsertEnd(int value)
    {
        if(top>8)
        {
            cout << "Top is full\n";
        }
        else
        {
            top++;
            a[top]=value;
        }
    }

    void display()
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

    void deleteEnd()
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
    int n;
    do
    {
        int number=0;
        cout << "1. Insert" << endl;
        cout << "2. Dispaly" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Exit" << endl;
        cin >> n;

        switch (n)
        {
        case 1:
            cout << "Enter the number :-> ";
            cin >> number;
            obj.InsertEnd(number);
            break;

        case 2:
            obj.display();
            break;

        case 3:
            obj.deleteEnd();
            break;
            
        
        default:
            break;
        }
    } while (n!=4);
    
}