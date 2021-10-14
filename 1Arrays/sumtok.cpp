//find pair of element that sum to k in sorted array

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 3, 4, 7, 10, 11, 12, 13};
    int k = 16;
    int current_sum;

    int n = sizeof(a) / sizeof(int);

    int i = 0, j = n - 1;
    while (i < j)
    {
        current_sum = a[i] + a[j];
        if (current_sum == k)
            break;
        if (current_sum < k)
            i++;
        else
            j--;
    }

    cout << "2 pairs are: " << i << " and " << j << endl;

    return 0;
}