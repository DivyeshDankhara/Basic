#include <iostream>

using namespace std;

int top=-1;
int a[10];

class arr
{
    public:

    void insert_first()
    {
            int number;
            cout << "Enter the Number :-> ";
            cin >> number;
            top++;
            for(int i=top;i>0;i--)
            {
                a[i]=a[i-1];
            }
            a[0]=number;

            if(top>8)
            {
                cout << "Array if Full" << endl;
            }
    }

    void delete_first()
    {
        for(int i=0;i<top;i++)
        {
            a[i]=a[i+1];
        }
        top--;
        
        if(top<0)
        {
            cout << "Array is Empty" << endl;
        }   
    }

    void display()
    {
        if(top<0)
        {
            cout << "Array is Empty :-> " << endl;
        }
        else
        {
            for(int i=0;i<=top;i++)
            {
                cout << "a[" << i << "] :-> " << a[i] << endl;
            }
        }
    }
};

int main()
{
    int n;
    arr obj;
    do
    {
        cout << "1. Insert" << endl;
        cout << "2. Delet" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cin >> n;

        switch(n)
        {
        case 1:
            obj.insert_first();
            break;

        case 2:
            obj.delete_first();
            break;

        case 3:
            obj.display();
            break;
        
        default:
            break;
        }
    } while (n != 4);
    
    return 0;
}