//maximum sum sub array
//more optimized
//o(n)  solution
//1.if current sum is negative prefer taking 0 sum
#include <iostream>
using namespace std;

int main()
{
    int a[] = {-4, 1, 3, -2, 16, 2, -8, -9, 4};

    int n = sizeof(a) / sizeof(int);

    int i;
    int current_sum = 0;
    int max_sum = 0;

    for (int i = 1; i < n; i++)
    {
        current_sum += a[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        max_sum = max(max_sum, current_sum);
    }

    cout << "\nMaximum sum from index " << max_sum;
    return 0;
}