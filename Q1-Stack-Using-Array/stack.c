#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

/* PUSH operation */
void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow! Cannot push %d.\n", value);
        return;
    }

    top++;
    stack[top] = value;

    printf("%d pushed into the stack.\n", value);
}

/* POP operation */
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }

    printf("%d popped from the stack.\n", stack[top]);
    top--;
}

/* PEEK operation */
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty. Nothing to peek.\n");
        return;
    }

    printf("Top element is: %d\n", stack[top]);
}

/* DISPLAY operation */
void display()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements from TOP to BOTTOM:\n");

    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

/* Main function */
int main()
{
    int choice;
    int value;

    while (1)
    {
        printf("\n===== STACK MENU =====\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
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
