#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int search(struct node *head, int n)
{
    int i = 1;
    struct node *ptr;
    ptr = head;
    if (ptr->data == n)
    {
        printf("element is found in linked list at position %d", i);
        return 1;
    }
    ptr = ptr->next;
    i++;

    while (ptr != head)
    {
        if (ptr->data == n)
        {
            printf("element is found in linked list at position %d", i);
            return 1;
        }
        ptr = ptr->next;
        i++;
    }
    return 0;
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
    int n;
    printf("Enter a number to search in the linked list: ");
    scanf("%d", &n);
    int num = search(head, n);
    if (num == 0)
    {
        printf("Number  is  not found in the linked list\n");
    }
}