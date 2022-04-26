#include <stdio.h>
int main()
{  
    int sum = 0,n;
    while(scanf("%d", &n)>0)
    {
        sum += n;
    }
    printf(" %d\n", sum);
    return 0;
}