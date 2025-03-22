#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
int search(struct node *head)
{
    int i = 1;
    int num;
    printf("Enter the number you want to search for: ");
    scanf("%d", &num);
    struct node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == num)
        {
            printf("Number %d is found at position %d\n", num, i);
            return 0;
        }
        i++;
        ptr = ptr->next;
    }
    return 1;
}
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->prev = NULL;
    head->next = NULL;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 20;
    ptr->prev = head;
    ptr->next = NULL;
    head->next = ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 30;
    ptr->prev = head->next;
    ptr->next = NULL;
    head->next->next = ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 40;
    ptr->next = NULL;
    ptr->prev = head->next->next;
    head->next->next->next = ptr;
    int n = search(head);
    if (n == 1)
    {
        printf("Number not found\n");
    }
}