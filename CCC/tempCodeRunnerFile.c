#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link; // Struct node pointer is a type of data type, int cannot be used because it can't store struct data address
} * x, *y;
int main()
{
    x = (struct node *)malloc(sizeof(struct node));
    y = (struct node *)malloc(sizeof(struct node));
    x->data = 10;
    x->link = y;
    y->data = 20;
    y->link = NULL;
    printf("%d %u\n", x->data, x->link);
    printf("%d", x->link->data);
    return 0;
}