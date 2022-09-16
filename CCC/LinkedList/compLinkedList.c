#include <stdio.h>
#include <stdlib.h>

int *compList(Node *head1, Node head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data == head2->data)
        {
            head1 = head1->next;
            head2 = head2->next;
        }
        else
        {
            return 0;
        }
    }
    if (head1 == NULL && head2 == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct node
{
    int data;
    struct node *link; // Struct node pointer is a type of data type, int cannot be used because it cant store struct
} * x, *y;
int main()
{

    return 0;
}