#include <iostream>
using namespace std;

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cout << a[i]; //garbage values
    }

    float a2[] = {3.4, 2, 3, 4, 5};
    int arrsize = sizeof(a2) / sizeof(int);

    cout << "\nArray 2: ";
    for (int i = 0; i < arrsize; i++)
    {
        cout << a2[i] << ", ";
    }

    float a3[6] = {7, 8}; //first 2 elements 7 and 8 rest all are 0
    cout << "\nArray 3: ";
    for (int i = 0; i < 6; i++)
    {
        cout << a3[i] << ", ";
    }
}