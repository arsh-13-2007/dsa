#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top = 0;
void push(int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = top;
    top = ptr;
}
void pop()
{
    struct node *ptr;
    ptr = top;
    if (top == 0)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d", top->data);
        top = top->next;
        free(ptr);
    }
}
int main (){
    push(1);
    push(2);
}
