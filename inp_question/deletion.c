#include <stdio.h>
int main()
{
    int n, pos;
    int size = 0;
    printf("enter position which we want to delete  : ");
    scanf("%d", &pos);
    printf("enter number of elements in aarays : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements of arrays : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        size = size + 1;
    }
    printf("size of old array : %d \n", size);
    for (int i = pos - 1; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("size of new array : %d\n ", size);
    printf("new array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}