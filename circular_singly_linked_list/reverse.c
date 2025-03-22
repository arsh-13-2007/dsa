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
struct node *reverse(struct node *head)
{
    struct node *prev = NULL, *current = head, *next = NULL;
    struct node *tail = head;
    do
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current != head);

    tail->next = prev;
    return prev;
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
    traverse(head);
    head = reverse(head);
    printf("\nafter reverse the linked list :\n");
    traverse(head);
}