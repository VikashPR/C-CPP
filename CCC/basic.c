#include <stdio.h>

int main()
{  
    int n;
    scanf("%d", &n);
    // find if the given  year is a leap year or not
    if (n % 4 == 0)
    {
        if (n % 100 == 0)
        {
            if (n % 400 == 0)
            {
                printf("%d is a leap year", n);
            }
            else
            {
                printf("%d is not a leap year", n);
            }
        }
        else
        {
            printf("%d is a leap year", n);
        }
    }
    else
    {
        printf("%d is not a leap year", n);
    } 
    return 0;
}