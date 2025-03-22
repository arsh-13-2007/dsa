#include <stdio.h>
int main()
{
    int n ; 
    printf("Enter number of elements of array : ");
    scanf("%d", &n ) ; 
    int x, index;
    printf("enter the element which we want to insert : ");
    scanf("%d", &x);
    printf("enter the index at which we want : ");
    scanf("%d", &index);
    int size = 0;
    int arr[n];
    printf("enter elements : ");
    for (int i = 0; i < n -1 ; i++)
    {
        scanf("%d", &arr[i]);
        size = size + 1;
    }
    printf(" old array : ");
    for (int i = 0; i < n -1 ; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("size of old  arrays : %d\n", size );

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
        if (i == index)
        {
            arr[i] = x;
            size = size + 1 ; 
        }
    }
    printf(" elements of new  array : ");
    for (int i = 0; i < n ; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n") ; 
    printf(" size of the  new array : %d",size  ); 
}
