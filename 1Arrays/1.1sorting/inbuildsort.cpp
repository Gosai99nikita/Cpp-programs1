#include <iostream>
#include <algorithm> //for sort function
using namespace std;

//Comparator function which will tell you how to compare your array
bool compare(int a, int b)
{
    return a > b; //descending order
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

    //sort()  => [Start,end)
    // sort(a, a + n);  //ascending order
    sort(a, a + n, compare);