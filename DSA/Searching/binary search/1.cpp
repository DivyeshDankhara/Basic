#include <iostream>

using namespace std;

int b(int a[],int n)
{
    int ele;
    cout << "Enter element :-> ";
    cin >> ele;
    int l = 0;
    int h = n-1;
    int mid = (l+h)/2;
    int check;

    while (l<=h)
    {
        if(a[mid]==ele)
        {
            check=true;
            break;
        }
        else if(a[mid]>ele)
        {
            h = mid-1;
            mid = (l+h)/2;
        }
        else if(a[mid]<ele)
        {
            l = mid+1;
            mid = (l+h)/2;
        }
    }
    
    if(check==true)
    {
        cout << "your target element position :-> " << mid+1;
    }
    else
    {
        cout << "your target not in array";
    }
}

int main()
{
    int a[]={1,5,7,9,25,30,40};

    b(a,8);
    return 0;
}