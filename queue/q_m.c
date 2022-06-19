#include "q.h"

int main()
{
    // Queue* New_queue;
    // int size,value,ch;

    // while (1)
    // {
    //     printf("*********MENU***********\n");
    //     printf("1: To creat new queue.\n");
    //     printf("2: To add element in the queue.\n");
    //     printf("3: To delete element from the queue.\n");
    //     printf("4: To EXIT.\n\n");

    //     printf("Enter your choice :\n");
    //     scanf("%d",&ch);

    // switch (ch)
    // {
    //     case 1:
    //         printf("Enter the size of the queue : ");
    //         scanf("%d",&size);
    //         New_queue=creat_queue(size);
    //         break;
    //     case 2:
    //         printf("Enter the element you want to insert in the queue : ");
    //         scanf("%d",&value);
    //         enqueue(New_queue,value);
    //         break;
    //     case 3:
    //         printf("%d is deleted from the queue\n",dequeue(New_queue));
    //         break;
    //     case 4:
    //         return 0;
    //     default:
    //         printf("Enter the correct choice.\n");
        
    //     }

    // }

    Queue* line;
    int usize;

    printf("Enter the size of Queue: ");
    scanf("%d", &usize);
    line=creat_queue(usize);
    enqueue(line, 10);
    enqueue(line, 20);
    enqueue(line, 30);
    enqueue(line, 40);

    printf("%d\t", dequeue(line));
    printf("%d\t", dequeue(line));
    printf("%d\t", dequeue(line));
    printf("%d\t", dequeue(line));
    printf("%d\t", dequeue(line));

    return 0;
}