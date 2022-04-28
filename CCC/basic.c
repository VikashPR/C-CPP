#include <iostream>
#include <unordered_map>
using namespace std;
int getMaximumDiff(int arr[], int n)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;
    int maxfreq = 0, minfreq = n;
    for (auto x : freq)
    {
        maxfreq = max(maxfreq, x.second);
        minfreq = min(minfreq, x.second);
    }
    return (maxfreq - minfreq);
}
int main()
{
    int arr[] = {1, 2, 3, 1, 5, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getMaximumDiff(arr, n) << "\n";
    return 0;
}
