//initialisation queue

#include<stdio.h>
#include<stdlib.h>

void level_order(queue* root)
{
    enqueue(&new_queue,root);
    if(root->left!=NULL);
    {
        enqueue(&new_queue,root->left);
    }
    if(root->right!=NULL)
    {
        enqueue(&new_queue,root->right);
    }
    if()
    printf("%d",root);
    
    level_order()
}
