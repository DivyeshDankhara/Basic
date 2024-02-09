// 5. Define a class BOOK with the following specifications :
// Private members of the class BOOK are
// BOOK NO integer type
// BOOKTITLE 20 characters
// PRICE float (price per copy)
// TOTAL_COST() A function to calculate the total cost for N number of copies where N
// is passed to the function as argument.
// Public members of the class BOOK are
// INPUT() function to read BOOK_NO. BOOK TITLE, PRICE
// PURCHASE() function to ask the user to input the number of copies to be
// purchased. It invokes TOTAL_COST() and prints the total cost to be paid by the user.
#include <iostream>

using namespace std;

class BOOK
{
    private:

    int BOOK_NO;
    char BOOKTITLE[20];
    float PRICE;
    int number;
    float total;

    float TOTAL_COST(int number,float PRICE)
    {
        total = number * PRICE; 
        return total;
    }

    public:

    void INPUT()
    {
        cout << "Enter the book_no :-> ";
        cin >> BOOK_NO;
        cin.ignore();
        cout << "Enter book title :-> ";
        gets(BOOKTITLE);
        cout << "Enter the price :-> ";
        cin >> PRICE; 
    }

    void PURCHASE()
    {
        cout << "Enter the Quentity :-> ";
        cin >> number;

        TOTAL_COST(number,PRICE);

        cout << "BOOK_NO :-> " << BOOK_NO << endl;
        cout << "BOOK TITLE :-> " << BOOKTITLE << endl;
        cout << "BOOK PRICE :-> " << PRICE << endl;
        cout << "BOOK QUENTITY :-> " << number << endl;
        cout << "Total cost to be paid by the user :-> "<< total << endl;
    }
};

int main()
{
    BOOK obj;
    obj.INPUT();
    obj.PURCHASE();
}