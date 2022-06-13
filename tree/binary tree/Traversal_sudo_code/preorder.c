#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left , *right;
}TREE;

// root--left--right

void preorder(TREE *root)
{
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}