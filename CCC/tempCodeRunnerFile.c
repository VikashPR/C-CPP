#include <stdio.h>

int main()
{  
    int n;
    scanf("%d", &n);
    if(n % 2 ==0){
        printf("Divisible by 2 and Divisible by 3\n");
        if(n%3 ==0)
            printf("Divisible by both\n");
        else
            printf("Not divisible by 3\n");
    }
    else{
        if(n%2 ==0)
            printf("Divisible by both\n");
        else
            printf("Not divisible by 2\n");
    }
    return 0;
}