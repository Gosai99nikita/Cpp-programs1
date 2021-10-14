#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4};
    int i, j, k;
    int n = sizeof(a) / sizeof(int);
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (k = i; k <= j; k++)
                cout << a[k] << ", ";

            cout << "\n";
        }
    }

    return 0;
}