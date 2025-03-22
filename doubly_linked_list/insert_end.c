#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void insertion_end(struct node *head)
{
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    };
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> data = 50 ; 
    ptr -> next  = NULL ; 
    ptr -> prev = temp ; 
    temp -> next = ptr ;
}
void traverse(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->prev = NULL;
    head->next = NULL;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 20;
    ptr->prev = head;
    ptr->next = NULL;
    head->next = ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 30;
    ptr->prev = head->next;
    ptr->next = NULL;
    head->next->next = ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 40;
    ptr->next = NULL;
    ptr->prev = head->next->next;
    head->next->next->next = ptr;
    insertion_end(head);
    traverse(head);

}