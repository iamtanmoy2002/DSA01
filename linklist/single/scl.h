#include<stdio.h>
#include<stdlib.h>

typedef struct block
{
    int data;
    struct block* next;
}Node;

Node* creat_node(int value);
void add_end(Node** head,int value);
void add_begin(Node** head,int value);
void traverse(Node* head);
void add_after(Node** head,int position,int value);
void add_before(Node** head,int position ,int value);
void del_after(Node** head,int posi);
void del_before(Node** head,int posi);
void del_at(Node** head,int posi);

