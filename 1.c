#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int count(struct node *head)
{
    int count = 0;
    struct node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}
void traverse( struct node* head){
    struct node *ptr = head ; 
    while (ptr != NULL) 
    {
        printf("%d\n",ptr -> data );
        ptr = ptr -> next ;

    }
}
int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 20;
    ptr->next = NULL;
    head->next = ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 30;
    ptr->next = NULL;
    head->next->next = ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 40;
    ptr->next = NULL;
    head->next->next->next = ptr;
    int n = count(head);
    if (n % 2 == 0)
    {
        ptr = head;
        int i = 1;
        while (i < n / 2)
        {
            ptr = ptr->next;
            i++;
        }
        struct node *head1;
        head1 = (struct node *)malloc(sizeof(struct node));
        head1 = ptr->next;
        ptr->next = NULL;
        printf("print linked  list split into two half ");
        printf("first linked list \n") ; 
        traverse( head);
        printf(" second linked list\n ") ; 
        traverse( head1);
    }
   
    else
    {
        int i = 1;
        ptr = head;
        while (i < (n - 1) / 2)
        {
            ptr = ptr->next;
            i++;
        }
        struct node *head1;
        head1 = (struct node *)malloc(sizeof(struct node));
        head1 = ptr->next;
        ptr->next = NULL;
        printf("print linked  list split iiiiinto two half ");
    }
}
