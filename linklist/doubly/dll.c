#include "dll.h"

Node *creat_node(int value)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = value;
    temp->prev = NULL;
    temp->next = NULL;
    return temp;
}

void add_at_end(Node **head, Node** tail, int value)
{
    Node *temp = creat_node(value);
    Node *curr = *head;

    if (*head == NULL)
    {
        *head = temp;
        *tail = temp;
        return ;
    }
    temp->prev= *tail;
    (*tail)->next=temp;
    *tail=temp;
}

void add_at_first(Node **head, Node** tail, int value)
{
    Node *temp = creat_node(value);
    Node *curr = *head;

    if (*head == NULL)
    {
        *head = temp;
        *tail = temp;
        return ;
    }
    temp->next= *head;
    (*head)->prev=temp;
    *head=temp;
}


void traverse_next(Node *head)
{
    while (head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}

void traverse_prev(Node *tail)
{
    while (tail!=NULL)
    {
        printf("%d ",tail->data);
        tail=tail->prev;
    }
    printf("\n");
}

void del_end(Node** tail)
{
    Node* temp;
    if (*tail==NULL)
    {
        printf("Invalid input");
        return;
    }
    temp= *tail;
    (*tail)->prev->next=NULL;
    *tail=(*tail)->prev;
    free(temp);
}

void del_start(Node** head)
{
    Node* temp;
    if(*head==NULL)
    {
        printf("Invalid input");
        return;
    }
    temp=*head;
    (*head)->next->prev=NULL;
    *head=(*head)->next;
    free(temp);
}

Node* search_posi(Node* head,int posi)
{
    int i,j,count=1;
    Node* temp;
    
    if(head==NULL)
    {
        printf("Invalid Input");
        return NULL;
    }
    if(posi<=0)
    {
        printf("Invalid Input");
        return NULL;
    }
    while (head->next!=NULL)
    {
        head=head->next;
        count++;
    }
    if (posi>count)
    {
        printf("Invalid Input");
        return NULL;
    }
    head=temp;
    for ( i = 1; i < posi; i++)
    {
        head=head->next;
    }
    return head;
}

void add_in_between_after(Node* posi_Node,int value)
{
    Node* temp=creat_node(value);

    if(posi_Node->next==NULL)
    {
        printf("Invalid input");
        return ;
    }
    temp->prev=posi_Node;
    temp->next=posi_Node->next;
    posi_Node->next->prev=temp;
    posi_Node->next=temp;
    
    return;
}

void add_in_between_before(Node* posi_Node,int value)
{
    Node* temp=creat_node(value);

    if(posi_Node==NULL)
    {
        printf("Invalid input");
        return ;
    }
    
    temp->next=posi_Node;
    temp->prev=posi_Node->prev;
    posi_Node->prev->next=temp;
    posi_Node->prev=temp;

    return;
}

void del_in_between_after(Node* posi)
{
    Node *temp;
    if (posi->next==NULL)
    {
        printf("invalid input\n");
        return;
    }
    if (posi->next->next==NULL)
    {
        printf("invalid input\n");
        return;
    }
    temp=posi->next;

    posi->next=posi->next->next;
    posi->next->prev=posi;

    free(temp);
}

void del_in_between_before(Node* posi)
{
    Node *temp;
    if (posi->prev==NULL)
    {
        printf("invalid input\n");
        return;
    }
    if (posi->prev->prev==NULL)
    {
        printf("invalid input\n");
        return;
    }
    temp=posi->prev;
    
    posi->prev=posi->prev->prev;
    posi->prev->prev=posi;

    free(temp);
}

void del_in_between_at(Node* posi)
{
    Node *temp;

    if (posi->prev==NULL)
    {
        printf("invalid input\n");
        return;
    }
    if (posi->prev->prev==NULL)
    {
        printf("invalid input\n");
        return;
    }
    temp=posi;
    
    posi->prev->next=posi->next;
    posi->next->prev=posi->prev;

    free(temp);
}