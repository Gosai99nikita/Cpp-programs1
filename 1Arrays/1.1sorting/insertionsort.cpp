#include <iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
    //Insertion sort:insert current element at right position
    int i, j, key;
    for (i = 1; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 and a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }

    cout << "\nSorted Array: ";
    for (i = 0; i < n; i++)
        cout << a[i] << ", ";
}

int main()
{

    int i, n;
    cout << "Enter size of the array: ";
    cin >> n;

    int a[n];
    cout << "\nEnter array elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "Originial Array: ";
    for (i = 0; i < n; i++)
        cout << a[i] << ", ";

    insertion_sort(a, n);
}