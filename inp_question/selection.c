#include <stdio.h>
void selection_sort(int *arr, int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n - 1 - i; j++)
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
void print_array(int *arr, int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void inpt(int *arr, int n)
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
    inpt(arr, n);
    printf("original array : \n");
   print_array(arr, n);
    selection_sort(arr, n);
     printf("sorted array : \n");
   print_array(arr, n);
}