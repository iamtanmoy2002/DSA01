#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left , *right;
}TREE;

// left--right--root

void postorder(TREE *root)
{
    inorder(root->left);
    inorder(root->right);
    printf("%d",root->data);
}