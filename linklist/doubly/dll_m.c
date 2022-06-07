#include "dll.h"

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int ch,value,position;

    while (1)
    {
        printf("*********MENU***********\n");
        printf("1: To add node at the end.\n");
        printf("2: To add node at the begin.\n");
        printf("3: To print the list.\n");
        printf("4: To print the list in reverse order.\n");
        printf("5: To delete the last node.\n");
        printf("6: To delete the first node.\n");
        printf("7: To add in between after.\n");
        printf("8: To add in between before.\n");
        printf("9: To delete in between after.\n");
        printf("10: To delete in between before.\n");
        printf("11: To delete in between at.\n");
        printf("12: To EXIT.\n\n");

        printf("Enter your choice :\n");
        scanf("%d",&ch);

    switch (ch)
    {
        case 1:
            printf("Enter the value to be inseted at the end : ");
            scanf("%d",&value);
            add_at_end(&head,&tail,value);
            break;
        case 2:
            printf("Enter the value to be inseted at the begining : ");
            scanf("%d",&value);
            add_at_first(&head,&tail,value);
            break;
        case 3:
            traverse_next(head);
            break;
        case 4:
            traverse_prev(tail);
            break;
        case 5:
            del_end(&tail);
            break;
        case 6:
            del_start(&head);
            break;
        case 7:
            printf("Enter the value to be added in between after a node : ");
            scanf("%d",&value);
            printf("Enter the position of the node you want to add after : ");
            scanf("%d",&position);
            search_posi(head,position);
            add_in_between_after(head,value);
            break;
        case 8:
            printf("Enter the value to be added in between before a node : ");
            scanf("%d",&value);
            printf("Enter the position of the node you want to add after : ");
            scanf("%d",&position);
            search_posi(head,position);
            add_in_between_before(head,value);
            break;        
        case 9:
            printf("Enter the position of the node you want to delete after : ");
            scanf("%d",&position);
            search_posi(head,position);
            del_in_between_after(head);
            break;
        case 10:
            printf("Enter the position of the node you want to delete before : ");
            scanf("%d",&position);
            search_posi(head,position);
            del_in_between_before(head);
            break;
        case 11:
            printf("Enter the position of the node you want to delete : ");
            scanf("%d",&position);
            search_posi(head,position);
            del_in_between_at(head);
            break;
        case 12:
            return 0;
        default:
            printf("Enter the correct choice.\n");
        
        }

    }
    return 0;
}