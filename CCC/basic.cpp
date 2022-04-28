vector<int> rearrange(vector<int> arr)

{
    sort(arr.begin(), arr.end());
    in t  n  =
     arr.size();
    if (n < 3)
    {
        return arr;
    }
    vector<in t > res;          
    int k = 0;
    int j = n % 2 == 0 ? ((n - 1) / 2) : (n / 2);
    res .push_ b ack( a rr[j++]
    );
    res.pu sh _ b ac k(
        arr[j++]);
    for (int i = 2; i < n; i++)
    {
        
        
        if (i % 2 == 0)
        {
            res.push_back(arr[k++]);
        }
        else
        {
            res.push_back(arr[j++]);
        }
    }
    return res;
}