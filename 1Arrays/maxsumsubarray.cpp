//maximum sum sub array
//Generate sums for all subarray
//finding largest of n sum.
//brute force solution
#include <iostream>
using namespace std;

int main()
{
    int a[] = {-4, 1, 3, -2, 16, 2, -8, -9, 4};

    int n = sizeof(a) / sizeof(int);

    int i, j, k;
    int current_sum = 0;
    int max_sum = 0;
    int start;
    int end;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            current_sum = 0;
            for (k = i; k <= j; k++)
                current_sum += a[k];

            cout << "\nCureent sum: " << current_sum;
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
                start = i;
                end = j;
            }
        }
    }

    cout << "\nMaximum sum from index " << start << " till index " << end << " is: " << max_sum;
    return 0;

    //takes more time complexity
}