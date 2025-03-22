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
void delete_pos(struct node *ptr)
{
    int i = 1;
    int pos;
    printf("Enter the position of the node to be deleted: ");
    scanf("%d", &pos);
    while (i < pos - 1)
    {
        ptr = ptr->next;
        i++;
    }
    struct node *temp;
    temp = ptr->next;
    ptr->next->next->prev = ptr;
    ptr->next = ptr->next->next;
    free(temp);
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
    delete_pos(ptr);
    ptr = head;
    traverse(ptr);
}