#include "music.h"

int main()
{
    int p;
    char c, t[50], ch, dump;
    char str[50];

    traverse(head);
    while(1)
    {
        printf("\nS start the player.");
        printf("\n\nJ jump to a specific track.");
        printf("\nN next track.");
        printf("\nP previous track.");
        printf("\nF first track.");
        printf("\nL last track.");
        printf("\nA add a track after an existing track.");
        printf("\nB add a track before an existing track.");
        printf("\nR remove a specific track from the list.\n");

        printf("\nEnter your choice: ");
        scanf("%c%c", &c, &dump);

        switch (c)
        {
            case 'S':
            play(head,tail, 0);
            break;
        case 'J':
            printf("\nEnter a track number: ");
            scanf("%d", &p);
            jump(head, p);
            break;
        case 'N':
            play(head, tail, 1);
            break;

        case 'P':
            play(head, tail, 2);
            break;

        case 'F':
            play(head, tail, 0);
            break;

        case 'L':
            play(head, tail, 9);
            break;

        case 'A':
            printf("\nEnter a pos: ");
            scanf("%d%c", &p, &dump);
            printf("\nEnter a track: ");
            add_after(head, p, t);
            break;
        case 'B':
            printf("\nEnter a pos: ");
            scanf("%d%c", &p, &dump);
            printf("\nEnter a track: ");
            add_before(head, p, t);
            break;

        case 'R':
            printf("\nEnter a pos: ");
            scanf("%d", &p);
            delete(head, p);
            break;

        case 'T':
            traverse(head);
            break;

        case 'Q':
            return 0;

        default:
            break;
        }
    }


    return 0;
}