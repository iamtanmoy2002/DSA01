//initialisation stack

#include<stdio.h>
#include<stdlib.h>

void inorder(node* root)
{
    while(1)
    {
        while(root!=NULL)
        {
            push(&st,root);
            root=root->left;
        }
        if(isempty(&st)==1)
        break;

        else
        {
            root=pop(&st);
            printf("%d",root->dada);
            root=root->right;
        }
    }
}