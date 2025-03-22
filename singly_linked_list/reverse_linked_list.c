#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void traverse(
    struct node *head)
{
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;
    struct node *ptr = NULL;
    ptr = (struct node *)malloc(sizeof(struct node));
    head->next = ptr;
    ptr->data = 20;
    ptr->next = NULL;
    ptr = (struct node *)malloc(sizeof(struct node));
    head->next->next = ptr;
    ptr->data = 30;
    ptr->next = NULL;
    traverse(head);
    struct node *ptr1 = NULL;
    struct node *ptr2 = NULL;
    while (head != NULL)
    {
        ptr2 = head->next;
        head->next = ptr1;
        ptr1 = head;
        head = ptr2;
    }
    head = ptr1;
    printf("\nreverse the singly linked list :\n");
    traverse(head);
}