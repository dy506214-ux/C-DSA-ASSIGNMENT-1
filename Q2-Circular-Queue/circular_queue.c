#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

/* ENQUEUE operation */
void enqueue(int value)
{
    if ((rear + 1) % MAX == front)
    {
        printf("Queue Overflow! Circular Queue is full.\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = value;

    printf("%d inserted into the circular queue.\n", value);
}

/* DEQUEUE operation */
void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow! Circular Queue is empty.\n");
        return;
    }

    printf("%d removed from the circular queue.\n", queue[front]);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
}

/* FRONT operation */
void getFront()
{
    if (front == -1)
    {
        printf("Circular Queue is empty.\n");
        return;
    }

    printf("Front element is: %d\n", queue[front]);
}

/* DISPLAY operation */
void display()
{
    if (front == -1)
    {
        printf("Circular Queue is empty.\n");
        return;
    }

    printf("Circular Queue elements:\n");

    int i = front;

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
        {
            break;
        }

        i = (i + 1) % MAX;
    }

    printf("\n");
}

/* Main function */
int main()
{
    int choice;
    int value;

    while (1)
    {
        printf("\n===== CIRCULAR QUEUE MENU =====\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. FRONT\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                getFront();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Program terminated.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
