#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
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
void insert_pos(struct node *ptr)
{
    int pos;
    printf("enter position that you want to add node:");
    scanf("%d", &pos);
    int data;
    printf("enter data that you want to add node:");
    scanf("%d", &data);
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    int i = 1;
    while (i < pos)
    {
        ptr = ptr->next;
        i++;
    }
    temp->next = ptr->next;
    ptr->next->prev = temp;
    temp->prev = ptr;
    ptr->next = temp;
}
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->next = NULL;
    head->data = 10;
    head->prev = NULL;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 20;
    temp->next = NULL;
    temp->prev = head;
    head->next = temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 30;
    temp->next = NULL;
    temp->prev = head->next;
    head->next->next = temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 40;
    temp->next = NULL;
    temp->prev = head->next->next;
    head->next->next->next = temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 50;
    temp->next = NULL;
    temp->prev = head->next->next->next;
    head->next->next->next->next = temp;
    struct node *ptr;
    ptr = head;
    insert_pos(ptr);
    ptr = head;
    traverse(ptr);
}