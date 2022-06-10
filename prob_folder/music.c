#include "music.h"

Node* creat_node(char arr[])
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->arr = arr;
    temp->next=temp;
    temp->prev=temp;
    return temp;
}

void add_at_end(Node **head, Node** tail, char arr[])
{
    Node *temp = creat_node(arr);
    Node *curr = *head;

    if (*head == NULL)
    {
        *head = temp;
        *tail = temp;
        return ;
    }
    temp->prev= *tail;
    (*tail)->next=temp;
    (*head)->next=temp;
    temp->next=*head;
    *tail=temp;
}

void add_at_first(Node **head, Node** tail, char arr[])
{
    Node *temp = creat_node(arr);
    Node *curr = *head;

    if (*head == NULL)
    {
        *head = temp;
        *tail = temp;
        return ;
    }
    temp->next= *head;
    (*head)->prev=temp;
    temp->prev=*tail;
    (*tail)->next=temp;
    *head=temp;
}

void traverse_next(Node *head)
{
    while (head!=NULL)
    {
        printf("%s",head->arr);
        head=head->next;
    }
    printf("\n");
}

void traverse_prev(Node *tail)
{
    while (tail!=NULL)
    {
        printf("%d ",tail->arr);
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

void jump(Node *head, int p)
{
    Node *pos = NULL;

    pos = search_by_position(head, p);
    printf("%s ",pos->data);
}

void play(Node *head, Node *tail, int k)
{
    if (k == 1)
        printf("%s ", head->next->data);
    if (k == 2)
        printf("%s ", head->prev->data);
    if (k == 0)
        printf("%s ", head->data);
    if (k == 9)
        printf("%s ", tail->data);
}