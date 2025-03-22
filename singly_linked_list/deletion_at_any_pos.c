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

void deletion_pos(struct node *ptr)
{
    int node;
    printf("Enter the node which you wnat to delete : ");
    scanf("%d", &node);
    int i = 1;
    while (i < node - 1)
    {
        ptr = ptr->next;
        i++;
    }
    ptr->next = ptr->next->next;
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
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 30;
    temp->next = NULL;
    head->next->next = temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 40;
    temp->next = NULL;
    head->next->next->next = temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 50;
    temp->next = NULL;
    head->next->next->next->next = temp;
    ptr = head;
    deletion_pos(ptr);
    ptr = head;
    traverse(ptr);
}