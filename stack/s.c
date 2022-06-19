#include "s.h"

Stack* creat_stack(int size)
{
    Stack* st=(Stack*)malloc(sizeof(Stack));
    st->size=size;
    st->tos=-1;
    st->arr=(int*)malloc(size*sizeof(int));
    return st;
}

int isfull(Stack* st)
{
    if(st->tos==st->size-1)
    {
        return 1;
    }
    else
    return 0;
}

int isempty(Stack* st)
{
    if(st->tos==-1)
    {
        return 1;
    }
    else
    return 0;
}

void push(Stack* st,int data)
{
    if (isfull(st)==1)
    {
        printf("stack overflow\n");
        return;
    }
    st->tos++;
    st->arr[st->tos]=data;
}

void pop(Stack* st)
{
    if(isempty(st)==1)
    {
        printf("stack underflow");
        return;
    }
    int temp;
    temp=st->arr[st->tos];
    st->tos--;
    printf("%d is popped form the stack",temp);
}

int peek(Stack* st)
{
    if(isempty(st)==1)
    {
        printf("stack underflow");
        return -999;
    }
    return st->arr[st->tos];
}