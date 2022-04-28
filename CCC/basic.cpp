#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char s[1002], a[1002];
int n, p, i, x;

int add(int k)
{
    int i = k, t;
    a[i]++;
    t = 0;
    while (a[i] - 96 > p && i >= 0)
    {
        t = 1;
        a[i] = 'a';
        i--;
        a[i] += t;
    }
    return i;
}

int _check(int k)
{
    for (int i = k; i <= n - 1; i++)
        if (a[i] == a[i - 1] || a[i] == a[i - 2])
            return i;
    return n;
}

int main()
{
    scanf("%d%d", &n, &p);
    scanf("%s", &s);
    for (int i = 0; i <= n; i++)
        a[i] = s[i];
    i = n - 1;
    while (1)
    {
        x = add(i);
        if (x == -1)
        {
            cout << "NO" << endl;
            return 0;
        }
        i = _check(x);
        if (i == n)
        {
            printf("%s", a);
            return 0;
        }
    }
    return 0;
}