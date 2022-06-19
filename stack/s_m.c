#include "s.h"

int main()
{
    Stack* new_stack;
    int size,value,ch;

    while (1)
    {
        printf("*********MENU***********\n");
        printf("1: To creat new stack.\n");
        printf("2: To push element in the stack.\n");
        printf("3: To pop element from the stack.\n");
        printf("4: To peek on the stack.\n");
        printf("5: To EXIT.\n\n");

        printf("Enter your choice :\n");
        scanf("%d",&ch);

    switch (ch)
    {
        case 1:
            printf("Enter the size of the stack : ");
            scanf("%d",&size);
            new_stack=creat_stack(size);
            break;
        case 2:
            printf("Enter the element you want to insert in the stack : ");
            scanf("%d",&value);
            push(new_stack,value);
            break;
        case 3:
            pop(new_stack);
            break;
        case 4:
            printf("%d\n",peek(new_stack));
            break;   
        case 5:
            return 0;
        default:
            printf("Enter the correct choice.\n");
        
        }

    }
    return 0;
}