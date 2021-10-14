//Binary Search array should be sorted
#include <iostream>
using namespace std;

int main()
{

    int i, n, ele;
    cout << "Enter size of the array: ";
    cin >> n;

    int a[n];
    cout << "\nEnter array elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "Originial Array: ";
    for (i = 0; i < n; i++)
        cout << a[i] << ", ";

    cout << "Enter Element to be searched: ";
    cin >> ele;
    //Binary search

    int start = 0;
    int end = n - 1;
    int mid, pos;
    while (start < end)
    {
        mid = (start + end) / 2;
        if (a[mid] == ele)
        {
            pos = mid;
            break;
        }
        if (ele < a[mid])
            end = mid - 1;
        else
            start = mid + 1;
        }

    cout << "Element found at position: " << pos + 1;
}