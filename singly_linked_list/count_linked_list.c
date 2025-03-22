#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void count(struct node **head)
{
    int count = 0;
    struct node *temp = *head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("number of node in code : %d", count);
}
struct node *head = NULL;
head = (struct node *)malloc(sizeof(struct node));
head->data = 10;
head->next = NULL;
struct node *ptr = NULL;
ptr = (struct node *)malloc(sizeof(struct node));
head->next = ptr;
ptr->data = 20;
ptr->next = NULL;
ptr = (struct node *)malloc(sizeof(struct node));
head->next->next = ptr;
ptr->data = 30;
ptr->next = NULL;
count(&head);
}
