#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    //Bubble Sort:Take larger element towards end
    int i, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++) //only till n-1-i (only till unsorted arrays)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                //can also use in built swap function
                //swap(a[i],a[j=+1])
            }
        }
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

    bubble_sort(a, n);
}