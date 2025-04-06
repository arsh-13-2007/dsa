#include <stdio.h>
#define N 5;

int top = -1;
int stack[5];

void push()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (top == 4)
    {
        printf("Stack is full\n");
    }
    else
    {
        top = top + 1;
        stack[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Popped element is: %d\n", stack[top]);
        top = top - 1;
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {

        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
int main()
{
        int choice;
    do
    {
        printf("enter choice  0.exists 1. push  2.pop  3. display ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            printf("exists !!!!");
            break;
        default:
            printf("invalid choice");
        }
    } while (choice != 0);
    return 0;
}