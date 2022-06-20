//initialisation stack

#include<stdio.h>
#include<stdlib.h>

void preorder(node* root)
{
    while(root!=NULL)
    {
        printf("%d",root->data);
        if(root->right!=NULL)
        {
            push(&st,root->data);
        }
        if(root->next!=NULL)
        {
            root=root->left;
        }
        else
        root=pop(&st);
    }
}