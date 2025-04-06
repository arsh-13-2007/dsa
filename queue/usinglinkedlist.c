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
    temp->next = 0 ;
    if (front == 0 && rear == 0)
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}
void dequeue() {
    if (front == 0 && rear == 0) {
        printf("Queue is empty\n");
    } else {
        printf("Deleted element: %d\n", front->data);
        struct node *temp = front;
        front = front->next;
        free(temp);
        if (front == 0) { 
            rear = 0;
        }
    }
}

void display (){
    if (front == 0) {
        printf("Queue is empty\n");
        return;
    }
    struct node *temp = front ;
    while (temp != 0 ){
        printf("%d ", temp->data );
        temp = temp->next ;
        }
}
int main (){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    dequeue();
    display(); 
}