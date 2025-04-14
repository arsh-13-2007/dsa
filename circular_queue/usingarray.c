#include <stdio.h>
int queue[5];
int front = -1;
int rear = -1;
void enqueue()
{
    int data;
    printf("Enter the data to be inserted in the queue: ");
    scanf("%d", &data);
    if (front == 0 && rear == 0)
    {
        front = rear = 0;
        queue[rear] = data;
    }
    else if ((rear + 1) % 5 == front)
    {
        printf("Queue is full\n");
    }
    else
    {
        rear = (rear + 1) % 5;
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
        front = rear = -1;
    }
    else
    {
        printf("%d", queue[front]);
        front = (front + 1) % 5;
    }
}
void display(){
    int i = front ;
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
        }
        else {
            printf("Queue elements are: \n");
            while ( i != rear ){
                printf("%d ", queue[i]);
                i = (i + 1) % 5;
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