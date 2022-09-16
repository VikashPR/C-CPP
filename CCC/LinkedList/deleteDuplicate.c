// In the sorted linked list delete the duplicate nodes
// Input: 1->1->2->3->3->4->5->5->5->6->7->7->8->8->9->9->9->9->NULL
// Output: 1->2->3->4->5->6->7->8->9->NULL
// Input: 1->1->1->1->1->1->1->1->1->NULL
// Output: 1->NULL
// Input: 1->2->3->4->5->6->7->8->9->NULL
// Output: 1->2->3->4->5->6->7->8->9->NULL

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} * x, *y;

Node *RemoveDuplicates(Node *head)
{
    Node *cur = head;
    while (cur->next != NULL)
    {
        if (cur->data == cur->next->data)
        {
            Node *temp = cur->next;
            cur->next = cur->next->next;
            free(temp);
        }
        else
        {
            cur = cur->next;
        }
    }
    return head;
}

void printList(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->link;
    }
    printf("NULL");
}