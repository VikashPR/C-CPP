#include <stdio.h>
void main()
{
    int no = 5;
    int *p = &no;
    if (&no == p)
        printf("here %d", ++*p);
    else
        printf("%d", *p);
}