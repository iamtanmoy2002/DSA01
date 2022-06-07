#include "q.h"

Queue* creat_queue(int size)
{
    Queue* New_q = (Queue*)malloc(sizeof(Queue));
    New_q->size=size;
    New_q->front=-1;
    New_q->rear=-1;
    New_q->arr=(int*)malloc(New_q->size*sizeof(int));
    return New_q;
}

int isempty(Queue* qu)
{
    if((qu->front==-1)&&(qu->rear==-1))
    {
        return 1;
    }
    else
        return 0;
}

int isfull(Queue* qu)
{
    if (qu->rear==qu->size-1)
    {
        return 1;
    }
    else
        return 0;
}

void enqueue(Queue* qu,int value)
{
    if (isfull(qu)==1)
    {
        printf("QUEUE is full ERROR! ");
        return;
    }

    if((qu->front==-1)&(qu->rear==-1))
    {
        qu->front=0;
        qu->rear++;
        qu->arr[qu->rear]=value;
    }
}

int dequeue(Queue* qu)
{
    int temp;
    if(isempty(qu)==1)
    {
        printf("QUEUE is empty! ERROR");
        return -999;
    }
    temp=qu->arr[qu->front];
    qu->front++;
    return temp;
}