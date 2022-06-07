#include<stdio.h>
#define Item int 
#define size 10

typedef struct
{
    Item arr[size];
    int tos;
}stack;

void init(stack* pts)
{
    pts->tos=-1;
}
int isfull(stack s)
{
    if(s.tos==size-1)
        return 1;
    else
        return 0;
    
}

int isempty(stack p)
{
    if(p.tos==-1)
        return 1;
    else 
        return 0;
}
void push(stack *pts,Item data)
{
    if(isfull(*pts)==1)
    return;
    else
    {
        pts->tos++;
        pts->arr[pts->tos]=data;
    }
}
Item pop(stack *pts)
{
    Item temp;
    if(isempty(*pts)==1)
    return;
    else
    {
        temp=pts->arr[pts->tos];
        pts->tos--;
        return temp;
    }
}

Item peek(stack *pts)
{
    if(isempty(*pts)==1)
    return ;
    else
    {
        reutrn pts->arr[pts->tos];
    }
}

int main()
{
    stack *s;
    char ch;
    Item data,result=0;
    

    while (1)
    {
        printf("\n1. to initialize");
        printf("\n2. for peek");
        printf("\n3. for push");
        printf("\n4. for pop");
        printf("\n5. if the stack is empty");
        printf("\n6. if the stack is full");
        scanf("%d",&ch)

        switch (ch)
        {
        case 1;
            s=
            break;
        
        default:
            break;
        }
    }
    
}