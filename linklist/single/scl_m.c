#include "scl.h"

int main()
{
    Node* head=NULL;
    int value,position;
    int ch;
    while (1)
    {
        printf("****  ***  MENU   ***  ****\n");
        printf("1 to add node at the end :\n");
        printf("2 to add node at the begining :\n");
        printf("3 to add node after any position :\n");
        printf("4 to add node before any position :\n");
        printf("5 to delete node after any position :\n");
        printf("6 to delete node before any position :\n");
        printf("7 to delete node at any position :\n");
        printf("8 to print the linklist :\n");
        printf("9 to exit :\n");

        printf("Enter a choice:");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter the value you want to add in the end of the linklist\n");
            scanf("%d",&value);
            add_end(&head,value);
            break;
        case 2:
            printf("Enter the value you want to add in the begining of the linklist\n");
            scanf("%d",&value);
            add_begin(&head,value);
            break;
        case 3:
            printf("Enter the value you want to add after a position \n");
            scanf("%d",&value);
            printf("Enter the position you want to add after \n");
            scanf("%d",&position);
            add_after(&head,position,value);
            break;
        case 4:
            printf("Enter the value you want to add before a position \n");
            scanf("%d",&value);
            printf("Enter the position you want to add before \n");
            scanf("%d",&position);
            add_before(&head,position,value);
            break;
        case 5:
            printf("Enter the position of the node to perform after deletion \n");
            scanf("%d",&position);
            del_after(&head,position); 
            break;
        case 6:
            printf("Enter the position of the node to perform before deletion \n");
            scanf("%d",&position);
            del_before(&head,position);
            break;
        case 7:
            printf("Enter the position of the node to delete \n");
            scanf("%d",&position);
            del_at(&head,position);
            break;
        case 8:
            traverse(head);
            break;
        case 9:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    
    }
    return 0;
}