#include<iostream>

using namespace std;

class Bank
{
    public:

    double withdrawl1,balance,diposite1;

    double withdrawl(double balance)
    {
        cout << "Enter the amount you withdrawl :-> ";
        cin >> withdrawl1;
        if(withdrawl1>0&&withdrawl1<=balance)
        {
            balance = balance-withdrawl1;
            cout << "Withdrawl is done" << endl;
            return balance;
        }
        else
        {
            balance;
            cout << "Invalid Amount" << endl;
            return balance;
        }
    }

    double diposite(double balance)
    {
        cout << "Enter the amount you diposit :-> ";
        cin >> diposite1;
        balance = balance+diposite1;
        return balance;
    }

    double checkbalance(double balance)
    {
        cout << "Bank balance is :-> " << balance << endl;

        return balance;
    }
};


int main()
{
    Bank obj;
    int pin;
    cout << "Enter your Pin :-> ";
    cin >> pin;
    
    if(pin==1912)
    {
        double balance=5000,b;
        int n;
        cout << "Divyesh Dankhara" << endl;
        cout << "Account Balance :-> " << balance << endl;
        do
        {
            cout << "1. Withdrawl" << endl << endl;
            cout << "2. Diposit" << endl << endl;
            cout << "3. Check Balance" << endl << endl;
            cout << "4. Exit" << endl << endl;
            cout << "Enter your choice :-> ";
            cin >> n;

            switch (n)
            {
                case 1:
                    b=obj.withdrawl(balance);
                    balance=b;
                    cout << "Account Balance is :-> " << b << endl;
                    break;

                case 2:
                    b=obj.diposite(balance);
                    balance=b;
                    cout << "Account Balance is :-> " << b << endl;
                    break;
            
                case 3:
                    b=obj.checkbalance(balance);
                    balance=b;
                    cout << "Account Balance is :-> " << b << endl;
                    break;

                case 4:
                    cout << "Sucessfuly Exit";
                    break;

                default:
                    cout << "Inavalid Input" << endl;
                    break;
            }
        } while (n!=4);
    }
    return 0;
}