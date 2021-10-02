#include <bits/stdc++.h>
using namespace std;

//Maximum possible sum of subarray
int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int current_sum = 0;
    int max_value = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        current_sum += arr[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }

        max_value = max(max_value, current_sum);
    }

    cout << max_value << endl;

    return 0;
}
