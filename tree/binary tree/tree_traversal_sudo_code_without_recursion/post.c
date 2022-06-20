//initialisation stack

#include<stdio.h>
#include<stdlib.h>

void inorder(node* root)
{
    do
    {
        while(root!=NULL)
        {
            if(root->right!=NULL)
            {
                push(&st,root->right);
            }
            push(&st,root);
            root=root->left;
        }
        if(isempty(&st)!=1)
        {
            root=pop(&st);
            if(root->right==peek(&st))
            {
                temp=pop(&st);
                push(&st,root);
                root=temp;
            }
            else
            {
                printf("%d",root->data);
                root=NULL;
            }
        }
    } while (1);
    
}