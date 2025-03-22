#include <stdio.h>
int stack[5];
int top = -1;
void push(int data)
{
    if (top == 4)
    {
        printf("Stack is full\n");
    }
    else
    {
        top = top + 1;
        stack[top] = data;
    }
}
void pop()
{
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    if (top == -1)
    {
        printf("undeerflow condition\n");2
    }
    else
    {
        printf("%d",stack[top]) ; 
        top = top - 1;
    }
}
void display()
{
    for (int i = 4; i <= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}
int main()
{
    int data;
    int choice;
    printf("enter choice  1. push 2. pop 3. display ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        printf("enter data: ");
        scanf("%d", &data);
        push(data);
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    default:
        printf("invalid choice");
        break;
    }
}