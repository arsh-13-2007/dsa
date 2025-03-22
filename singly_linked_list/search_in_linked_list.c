#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int search(struct node *ptr)
{
    int num;
    printf("Enter the number you want to search: ");
    scanf("%d", &num);
    int node = 1;
    while (ptr != NULL)
    {
        if (ptr->data == num)
        {
            printf("Number %d is found at node %d\n", num, node);
            return 0;
        }
        else
        {
            ptr = ptr->next;
            node++;
        }
    }
    return 1;
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
    int n = search(ptr);
    if (n == 1)
    {
        printf("Number not found in linked list\n");
    }
}
