#include <stdio.h>
int queue[5];
int front = -1;
int rear = -1;

void enqueue()
{
    int data;
    printf("Enter the data to be inserted: ");
    scanf("%d", &data);
    if (rear == 4)
    {
        printf("Queue is full\n");
    }
    else if (rear == -1 && front == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear = rear + 1;
        queue[rear] = data;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        printf("Deleted item is: %d\n", queue[front]);
        front = front + 1;
    }
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}
int main (){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    display();
}