#include <stdio.h>
int s[1000000], max[10000];
int top = -1, m = -1;
int main()
{
    int n, x, v;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &x);
        if (x == 1)
        {
            scanf("%d", &v);
            s[++top] = v;
            if (m == -1 || v > max[m])
                max[++m] = v;
        }
        else if (x == 2)
        {
            if (s[top] == max[m])
                m--;
            top--;
        }
        else
            printf("%d\n", max[m]);
    }
    return 0;
}