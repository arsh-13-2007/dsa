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
struct node *insert_beg(struct node *head)
{
    struct node *ptr;
    ptr = head->next;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 0;
    temp->next = head;
    ptr->next = temp;
    return temp;
}
int main()
{
    struct node *head = NULL;
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
    ptr->next = NULL;
    head->next->next = ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 40;
    ptr->next = head;
    head->next->next->next = ptr;
    head = insert_beg(head);
    traverse(head);
}