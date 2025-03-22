#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf(" node data : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *delete_start(struct node *head)
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("linked list not exists");
    }
    else{
        ptr = head->next ; 
        head->next = NULL ; 
        free(head);
        return ptr ;
    }
}
int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;
    struct node *temp = NULL;
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
    head = delete_start(head);
    traverse(head);
}