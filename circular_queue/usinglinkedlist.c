#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;
void enqueue()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter the element to be inserted: ");
    scanf("%d", &data);
    temp->data = data;
    temp->next = 0;
    if (front == 0 && rear == 0)
    {
        front = rear = temp;
        rear->next = front;
    }
    else
    {
        rear->next = temp;
        rear = temp;
        rear->next = front;
    }
}
void dequeue()
{
    struct node *temp = front;
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = 0;
        free(temp);
    }
    else
    {
        printf("Deleted element: %d\n", front->data);

        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void display()
{
    struct node *temp = front;
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        while (temp->next != front)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d ", temp->data);
    }
}
int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    dequeue();
    display();
}