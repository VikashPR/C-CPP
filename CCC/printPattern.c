#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 10;
    for (int i = 0; i <= n; i++)
    {
        int x = k / 9;
        printf("%d\n", i * x);
        k *= 10;
        printf("\n");
    }

    return 0;
}