#include <stdio.h>

#define n 2
void main()
{
    int MAX
    int queue[MAX], ch = 1, front = 0, rear = 0, i, j = 1, x = n;
    //clrscr();
    printf("Queue using Array");
    printf("\n 4.Insertion \n 3.Deletion \n 2.Display \n 0.Exit");
    while (ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 4:
            if (rear == x)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:", j++);
                scanf("%d", &queue[rear++]);
            }
            break;
        case 3:
            if (front == rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d", queue[front++]);
                x++;
            }
            break;
        case 2:
            printf("\n Queue Elements are:\n ");
            if (front == rear)
                printf("\n Queue is Empty");
            else
            {
                for (i = front; i < rear; i++)
                {
                    printf("%d", queue[i]);
                    printf("\n");
                }
                break;
            case 1:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            }
        }
    }

    return 0;
}

