#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = 0 ;
void push()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter the data to be pushed: ");
    scanf("%d", &data);
    temp->data = data;
    temp->next = top;
    top = temp;
}
void pop()
{
    if (top == 0)
    {
        printf("Stack is empty");
        return;
    }
    else
    {
        struct node *temp = top;
        printf("%d\n", top->data);
        top = top->next;
        free(temp);
    }
}
void display()
{
    struct node *temp = top;
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    printf("\n");
}
void reverse()
{
    struct node *ptr = NULL;
    struct node *ptr1 = NULL;
    struct node *head = top;
    while (head != NULL)
    {
        ptr1 = head->next;
        head->next = ptr;
        ptr = head;
        head = ptr1;
    }
    top = ptr ; 
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
    reverse();
    printf("after reverse the stack : ") ; 
    display();
}