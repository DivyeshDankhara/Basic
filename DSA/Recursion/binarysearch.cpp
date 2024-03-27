#include <iostream>

using namespace std;

class array
{
public:
    int sort(int a[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }

    int binary_search(int a[], int start, int end, int ele)
    {
        if (start <= end)
        {
            int mid = (start + end) / 2;

            if (a[mid] == ele)
            {
                return mid;
            }
            else if (a[mid] > ele)
            {
                end = mid - 1;
            }
            else if (a[mid] < ele)
            {
                start = mid + 1;
            }
        }
        else
        {
            return 0;
        }
           binary_search(a, start, end, ele);
    }
};

int main()
{
    array obj;
    int n;
    cout << "Enter Array Range :-> ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % n + 1;
    }
    cout << "Unsorted Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    obj.sort(a, n);

    cout << "Sorted Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    int ele;
    cout << "Enter element you search in array :-> ";
    cin >> ele;
    int start = 0;
    int end = n - 1;
    int ans = obj.binary_search(a, start, end, ele);

    if (ans > 0)
    {
        cout << "Your element position is :-> " << ans + 1 << endl;
    }
    else
    {
        cout << "Your element not in array" << endl;
    }
    return 0;
}