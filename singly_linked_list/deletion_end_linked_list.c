#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void deletion_end(struct node *ptr)
{
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = NULL;
}
int main()
{
    struct node *head, *ptr;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 20;
    temp->next = NULL;
    head->next = temp; 
d    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 30;
    temp->next = NULL;
    head->next->next = temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 40;
    temp->next = NULL;
    head->next->next->next = temp;
    ptr = head;
    deletion_end(ptr);
    ptr = head;
    traverse(ptr);
}