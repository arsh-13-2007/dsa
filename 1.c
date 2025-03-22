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
        printf("elements of linked list : %d\n", ptr->data);
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
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 40;
    ptr->next = NULL;
    head->next->next->next = ptr;
    struct node *temp = NULL;
    struct node *ptr1 = NULL;
    while (head != NULL)
    {
        ptr1 = head->next;
        head->next = temp;
        temp= head;
        head = ptr1;
    }
    head = temp;

    traverse(head);
}