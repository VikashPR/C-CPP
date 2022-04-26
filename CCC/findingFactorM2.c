#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{  
    int n;
    scanf("%d", &n);
    for (int i = 1; i < sqrt(n); i++)
    {
        if(n % i == 0)
        {
            if(i!=n/i)
            printf("%d %d\n", i, n/i);
            else
            printf("%d\n", i);
        }
    }
    
    return 0;
}