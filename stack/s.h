#include<stdio.h>
#include<stdlib.h>

typedef struct bucket
{
    int size;
    int *arr;
    int tos;
}Stack;

Stack* creat_stack(int size);
int isfull(Stack* st);
int isempty(Stack* st);
void push(Stack* st,int data);
void pop(Stack* st);
int peek(Stack* st);
