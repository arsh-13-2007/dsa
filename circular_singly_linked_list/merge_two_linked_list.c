#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *head)
{
    struct node *ptr;
    ptr = head;
    printf("%d\n", ptr->data);
    ptr = ptr->next;
    while (ptr != head)

    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
void merge(struct node *head, struct node *head1)
{
    struct node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = head1;
    ptr = head1;
    while (ptr->next != head1)
    {
        ptr = ptr->next;
    }
    ptr->next = head;
}
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 20;
    ptr->next = NULL;
    head->next = ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 30;
    ptr->next = head;
    head->next->next = ptr;
    struct node *head1;
    head1 = (struct node *)malloc(sizeof(struct node));
    head1->data = 40;
    head1->next = NULL;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 50;
    temp->next = head1;
    head1->next = temp;
    merge(head, head1);
    traverse(head);
}
