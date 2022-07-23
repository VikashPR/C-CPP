#include <stdio.h>

void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

int main()
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    swap(&num1,&num2);

    //displaying numbers after swapping
    printf("%d %d",num1,num2);

    return 0;
}