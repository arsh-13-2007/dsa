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
void delete_pos(struct node *head)
{
    struct node *ptr = head;
    int i = 1;
    int pos;
    printf("Enter the position of the node to be deleted : ");
    scanf("%d", &pos);
    while (i < pos -1 )
    {
        ptr = ptr->next;
        i++;
    }
    ptr->next = ptr->next->next;
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
    delete_pos(head) ; 
    traverse(head);
}