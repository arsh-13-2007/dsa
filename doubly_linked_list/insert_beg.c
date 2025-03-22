#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *insert_beg(struct node *head)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 0;
    ptr->prev = NULL;
    ptr->next = head;
    head->prev = ptr;
    return ptr;
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
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;
    head->prev = NULL;
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
    head = insert_beg(head);
    traverse(head) ;
}