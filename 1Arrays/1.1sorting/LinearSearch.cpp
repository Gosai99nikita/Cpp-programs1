//Linear search
#include <iostream>
using namespace std;

int main()
{
    int n, i, ele, pos = -1;

    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];
    cout << "\nEnter Array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "\nArray you entered: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }

    cout << "\nEnter element to be searched for: ";
    cin >> ele;

    for (i = 0; i < n; i++)
    {
        if (ele == a[i])
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        cout << "\nElement not found ";
    else
        cout << "\nElement found at position: " << pos + 1;
}