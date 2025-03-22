#include <stdio.h>
int main()
{
    int size = 0;
    int n;
    printf("enter number ; ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements of the arrays : ");
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        size++;
    }
    printf("old arrays  size : %d\n", size);
    printf("old arrays : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int x;
    printf("enter number to insert : \n");
    scanf("%d", &x);
    int index;
    printf("enter index at which we add number :\n ");
    scanf("%d", &index);
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
        if (i == index)
        {
            arr[i] = x;
            size++;
        }
    }
    printf("new array size : %d\n", size);
    printf("new array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
