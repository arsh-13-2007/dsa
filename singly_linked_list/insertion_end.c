// less in use complexity is high 
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
    while (ptr != NULL)
    {
        printf("elements of linked list : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void insert_end(struct node *head, int data)
{
    struct node *ptr, *add;
    add = (struct node *)malloc(sizeof(struct node));
    add->data = data;
    add->next = NULL;
    ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = add;
    return;
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

    int data;
    printf("enter number you wnat to add at end : ");
    scanf("%d", &data);
    insert_end(head, data);
    traverse(head);
}