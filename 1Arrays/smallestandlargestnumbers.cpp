#include <iostream>
#include <climits> //gives you largest and smallest number in INTEGER
using namespace std;

int main()
{

    int largest_num = INT_MIN;
    int smallest_num = INT_MAX;
    int n, i;

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

    //largest and smallest number in array
    for (i = 0; i < n; i++)
    {
        if (a[i] < smallest_num)
            smallest_num = a[i];
        if (a[i] > largest_num)
            largest_num = a[i];
    }

    cout << "\nSmallest Number: " << smallest_num;
    cout << "\nLargest Number: " << largest_num;

    return 0;
}