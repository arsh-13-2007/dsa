#include <stdio.h>
int queue[5];
int front = -1;
int rear = -1;

void enqueue()
{
    int x ; 
    printf("Enter the element to be inserted: ");
    scanf("%d",&x);

    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % 5 == front)
    {
        printf("Queue is full\n");
    }
    else
    {
        rear = (rear + 1) % 5;
        queue[rear] = x;
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
        front = rear = -1;
    }
    else
    {
        printf("%d dequeued\n", queue[front]);
        front = (front + 1) % 5;
        
    }
}
void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are: ");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
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