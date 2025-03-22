#include <stdio.h>
int binary_search(int *arr, int n)
{
    int lower_index = 0;
    int upper_index = n - 1;
    int search;
    printf("enter the element thart you want to search : ");
    scanf("%d", &search);
    while (lower_index <= upper_index)
    {
        int mid = (lower_index + upper_index) / 2;
        if (arr[mid] == search)
        {
            return mid;
        }
        else if (arr[mid] < search)
        {
            lower_index = mid + 1;
        }
        else
        {
            upper_index = mid - 1;
        }
    }
    return -1;
}
void bubble_sorting(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void selection_sort(int *arr, int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                int temp = arr[min];
                arr[min] = arr[j];
                arr[j] = temp;
            }
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
    printf("enter elements of array : ");
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
    printf("\n") ; 
    // bubble_sorting(arr, n);
    selection_sort(arr, n );
    printf("Sorted array : ");
    print_array(arr, n);
    printf("\n") ; 
    int index = binary_search(arr, n);
    if (index != -1)
    {
        printf("Element found at index %d\n", index);
    }
    else
    {
        printf("Element not found in array\n");
    }
}