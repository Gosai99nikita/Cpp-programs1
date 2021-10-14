#include <iostream>
using namespace std;

bool compare(int a, int b)
{
    cout << "Comparing " << a << " and " << b << endl;
    return a > b; //a<b(decreasing order)
}

void bubble_sort(int a[], int n, bool (&cmp)(int, int)) //cmp takes two integers as inputs
{
    //Bubble Sort:Take larger element towards end
    int i, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++) //only till n-1-i (only till unsorted arrays)
        {
            if (cmp(a[j], a[j + 1]))
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
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

    bubble_sort(a, n, compare);
    //passing function as parameter
}