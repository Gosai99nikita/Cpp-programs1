//maximum sum sub array
//(o)^2 solution
//1.first find cumulative sum
//2.csum[j]-csum[i-1] will give you sum of that sunarray
#include <iostream>
using namespace std;

int main()
{
    int a[] = {-4, 1, 3, -2, 16, 2, -8, -9, 4};

    int n = sizeof(a) / sizeof(int);

    int i, j;
    int csum[n] = {0};
    int current_sum = 0;
    int max_sum = 0;
    int start;
    int end;

    //computing cumilative sum
    csum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        csum[i] = csum[i - 1] + a[i];
        cout << csum[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            current_sum = 0;
            current_sum = csum[j] - csum[i - 1];
            cout << "\nCurret_sum: " << current_sum;
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