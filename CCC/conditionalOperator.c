#include<stdio.h>
int main(){
    int x = 10, y = 15;
    printf("")?printf("%d",x):printf("%d",y);
    return 0;
}
// Output:
// Since there is not value inside the printf it returns false so the y will be printed.