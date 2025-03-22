#include <stdio.h>
void linear_search(int *arr, int n)
{
    int search;
    printf("enter number you wnat to search : ");
    scanf("%d", &search);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("number found at index %d\n", i);
            return;
        }
    }
}
void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void input_array(int *arr, int n)
{
    printf("enter elements odf arrays : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int main()
{
   
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    input_array(arr, n);
    printf("original array : ");
    print_array(arr, n);
    linear_search(arr, n);
    
}