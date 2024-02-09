#include <iostream>

using namespace std;

int main()
{
    char a;

    cout << "Enter a character :-> ";
    cin >> a;

    if(a==65||a==73||a==79||a==85||a==97||a==101||a==105||a==111||a==117)
    {
        cout << a << " is a vowel";
    }
    else
    {
        cout << a << " is a consonant";
    }
}