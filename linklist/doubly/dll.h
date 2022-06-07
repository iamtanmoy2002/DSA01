#include<stdio.h>
#include<stdlib.h>

typedef struct block
{
    int data;
    struct block* next;
    struct block* prev;
    
}Node;

Node* creat_node(int value);
void add_at_end(Node **head, Node** tail, int value);
void add_at_first(Node **head,Node** tail, int value);
void traverse_next(Node *head);
void traverse_prev(Node *tail);
void del_end(Node** tail);
void del_start(Node** head);
Node* search_posi(Node* head,int posi);
void add_in_between_after(Node* posi_Node,int value);
void add_in_between_before(Node* posi_Node,int value);
void del_in_between_after(Node* posi);
void del_in_between_before(Node* posi);
void del_in_between_at(Node* posi);