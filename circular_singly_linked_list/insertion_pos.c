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
void insert_pos(struct node *head)
{
    struct node *ptr;
    ptr = head;
    int i = 1;
    int pos;
    printf("Enter the position to insert the node after it  : ");
    scanf("%d",&pos);
    while (i < pos)
    {
        ptr = ptr->next;
        i++;
    }
    struct node  *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 25;
    temp->next = ptr->next;
    ptr->next = temp;
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
    insert_pos(head);
    traverse(head);
}