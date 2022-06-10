#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
    int data;
    char arr[100];
    struct st* next;
    struct st* prev;
}Node;

Node* creat_node(char arr[]);
void add_at_end(Node **head, Node** tail, char arr[]);
void traverse_next(Node *head);
void add_at_first(Node **head, Node** tail, char arr[]);
void traverse_prev(Node *tail);
void del_end(Node** tail);
Node* search_posi(Node* head,int posi);
void del_start(Node** head);

