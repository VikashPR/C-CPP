#include <bits/stdc++.h>
using namespace std;
void sum_of_elements(int arr[], int n)
{
    int sumfirst = 0, sumsecond = 0;

    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
            sumfirst += arr[i];
        else
            sumsecond += arr[i];
    }

    cout << sumfirst << endl;

    cout << sumsecond << endl;
}

// Driver Code
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sum_of_elements(arr, n);

    return 0;
}