#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
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
struct node *insert_end(struct node *ptr, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    return ptr->next;
}
int main()
{

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;
    struct node *ptr;
    ptr = head;
    ptr = insert_end(ptr, 20);
    ptr = insert_end(ptr, 30);
    ptr = insert_end(ptr, 40);
    ptr = insert_end(ptr, 50);
    ptr = head;

    int num;
    printf("enter number you want to add : ");
    scanf("%d", &num);
    int pos;
    printf("enter position you want to add : ");
    scanf("%d", &pos);
    ptr = head;
    int i = 1;
    while (i < pos)
    {
        ptr = ptr->next;
        i++;
    }
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->next = ptr->next;
    ptr->next = temp;
    ptr = head;
    traverse(ptr);
}
