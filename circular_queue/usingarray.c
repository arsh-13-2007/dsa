#include <stdio.h>
int queue[5];
int front = -1;
int rear = -1;

void enqueue() {
    int data;
    printf("Enter the data to be inserted in the queue: ");
    scanf("%d", &data);

    if ((rear + 1) % 5 == front) {
        printf("Queue is full\n");
    }
    else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = data;
    }
    else {
        rear = (rear + 1) % 5;
        queue[rear] = data;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    }
    else if (front == rear) {
        printf("Deleted element: %d\n", queue[front]);
        front = rear = -1;
    }
    else {
        printf("Deleted element: %d\n", queue[front]);
        front = (front + 1) % 5;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    }
    else {
        int i = front;
        printf("Queue elements are: ");
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % 5;
        }
        printf("%d\n", queue[rear]); // print the last element
    }
}

int main() {
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    display();
    return 0;
}
