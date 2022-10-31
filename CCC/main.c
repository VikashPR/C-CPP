#include <stdio.h>
void Inorder(struct BinaryTreeNode *root){
    struct Node *current = root;
    sturct Node *S = NULL;
    bool done = 0;
}

int main()
{
    while(!done){
        if(current != NULL){
            Push(&S, current);
            current = current->left;
        }
        else{
            if(!isEmpty(S)){
                current = Pop(&S);
                printf("%d ", current->data);
                current = current->right;
            }
            else
                done = 1;
        }
    }
    return 0;
}