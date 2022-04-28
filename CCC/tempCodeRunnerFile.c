#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int *p = &a;
    int *q = &b;
    int c = *p + *q;
    printf("%d\n", c);
    return 0;
}