#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void traverse(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
struct node *deletion_beg(struct node *head)
{
    struct node *temp = head->next;
    temp->prev = NULL;
    head->next = NULL;`
    free(head);
    head = temp;
    return head;
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
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 50;
    ptr->next = NULL;
    ptr->prev = head->next->next->next;
    head->next->next->next->next = ptr;
    head = deletion_beg(head);
    traverse(head);
}