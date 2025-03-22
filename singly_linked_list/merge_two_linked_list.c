#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void merge(struct node *head, struct node *head1)
{
    struct node *ptr;
    ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = head1;
}
void traverse(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->next = NULL;
    head->data = 10;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 20;
    ptr->next = NULL;
    head->next = ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 30;
    ptr->next = NULL;
    head->next->next = ptr;
    struct node *head1;
    head1 = (struct node *)malloc(sizeof(struct node));
    head1->data = 40;
    head1->next = NULL;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 50;
    temp->next = NULL;
    head1->next = temp;
    merge(head, head1);
    traverse(head);
}