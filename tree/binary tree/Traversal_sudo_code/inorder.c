#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left , *right;
}TREE;

// left--root--right

void inorder(TREE *root)
{
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
