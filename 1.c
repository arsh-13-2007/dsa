#include<stdio.h>
#include<stdlib.h>
struct node(){
    int data;
    struct node* next;
};
struct node*front = 0 ;
struct node*rear = 0 ;

void enqueue(){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    int data ; 
    printf("Enter the data to be inserted: ");
    scanf("%d",&data);
    temp -> data = data ; 
    temp -> next = NULL ; 
    if(front ==  0 && rear == 0 ){
        front = rear = temp ;
    }
    else {
        rear ->next = temp ; 
        rear = temp ;
    }
}
void dequeue(){
    if ( rear == 0 && )
}