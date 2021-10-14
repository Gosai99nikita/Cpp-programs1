#include <iostream>
using namespace std;

void selection_sort(int a[], int n)
{
    //Selection Sort: finds minimum element in the unsorted array ad swaps
    int min_ele, i, temp;
    for (i = 0; i < n - 1; i++)
    {
        min_ele = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[min_ele])
                min_ele = j;
        }

        //swaps once we get minimum element from unsorted array
        temp = a[i];
        a[i] = a[min_ele];
        a[min_ele] = temp;
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

    selection_sort(a, n);
}