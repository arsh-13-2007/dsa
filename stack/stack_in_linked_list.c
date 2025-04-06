#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
} ;
struct node *top = 0;

void push()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value of the node: ");
    scanf("%d", &ptr->data);
    ptr->link = top;
    top = ptr;
}
void pop()
{
    if (top == 0)
    {
        printf("Stack is empty");
        return;
    }
    struct node *ptr;
    ptr = top;
    printf("%d\n", top->data);
    top = top->link;
    free(ptr);
}
void display()
{
    struct node *ptr;
    ptr = top;
    while (ptr != 0)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
int main()
{
    push();
    push();
    push();
    push();
    pop();
    pop();
    push();
    display();
}