#include<stdio.h>
int main(){
    int x = 10, y = 15;
    printf("")?printf("%d",x):printf("%d",y);
    op();
    return 0;
}
// Output:
// Since there is not value inside the printf it returns false so the y will be printed.
void operator(){
    int x = 100, y = 15, z;
    x>=y?z=x:z=y;
    printf("%d",z);
}
// Output:
// the compiler ignores the semicollen and assignees the y value to all the variables x,y.