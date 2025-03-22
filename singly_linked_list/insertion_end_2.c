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
    while (ptr != NULL)
    {
        printf("elements of linked list : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insert_end(struct node *head, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node)) ;
            ptr->data = data;
             ptr -> next = NULL ;
             head -> next = ptr ;  
             return ptr ; 
}

int main()
{
    int data;
    struct node *head = NULL;
    struct node *ptr;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;
    ptr = insert_end(head, 30);
    ptr = insert_end(ptr , 40 );
    traverse(head);

}