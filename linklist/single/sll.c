#include "sll.h"

Node* creart_node(int value)
{
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->data=value;
    temp->next=NULL;
    return temp;
}

void add_end(Node** head, int value)
{
    Node* temp=creart_node(value);
    Node* curr= *head;
    if (*head==NULL)
    {
        *head=temp;
        return;
    }
    while (curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
}

void add_begin(Node** head,int value)
{
    Node* temp=creart_node(value);
    if(*head==NULL)
    {
        *head = temp;
    }
    temp->next= *head;
    *head=temp;
}

void traverse(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    while (head!=NULL)
    {
        printf("%d  ",head->data);
        head=head->next;
    }
    printf("\n");
}   

void add_after(Node** head,int position ,int value)
{
    Node* new_node=creart_node(value);
    int i=0;
    Node* curr= *head;
    while (i<position)
    {
        curr=curr->next;
        i++;
    }
    new_node->next=curr->next;
    curr->next=new_node;
    
}

void add_before(Node** head,int position ,int value)
{
    Node* new_node=creart_node(value);
    int i=0;
    Node* curr= *head;
    for ( i = 0; i < position-1; i++)
    {
        curr=curr->next;
    }
    new_node->next=curr->next;
    curr->next=new_node;
}

void del_after(Node** head,int posi)
{
    Node* temp;
    int i=0;
    Node* curr= *head;
    while (i<=posi)
    {
        curr=curr->next;
        i++;
    }
    temp=curr->next;
    curr->next=temp->next;

    free(temp);
}

void del_before(Node** head,int posi)
{
    Node* temp;
    int i=0;
    Node* curr= *head;
    while (i<posi-1)
    {
        curr=curr->next;
        i++;
    }
    temp=curr->next;
    curr->next=temp->next;

    free(temp);
}

void del_at(Node** head,int posi)
{
    Node* temp;
    int i=0;
    Node* curr= *head;
    while (i<posi-1)
    {
        curr=curr->next;
        i++;
    }
    temp=curr->next;
    curr->next=temp->next;

    free(temp);
}