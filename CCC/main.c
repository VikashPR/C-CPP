#include <stdio.h>
struct Sample
{
    int a;
    int b;
};
int main()
{
    struct Sample re, *pe;
    re.a = 88;
    re.b = 99;
    pe = &re;
    printf("Using Regular Element %d %d \n", re.a, re.b);
    printf("Using Pointer Element %d %d\n", pe->a, pe->b);
    printf("Using Pointer Element %d %d", (*pe).a, (*pe).b);
    return 0;
}