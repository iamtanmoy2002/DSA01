#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
    int *arr;
    int size;
    int front;
    int rear;

}Queue;

Queue* creat_queue(int size);
int isempty(Queue* qu);
int isfull(Queue* qu);
void enqueue(Queue* qu,int value);
int dequeue(Queue* qu);