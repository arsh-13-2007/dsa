#include <stdio.h>
int search(int *arr, int n, int num)
{
    int lower_index = 0;
    int upper_index = n - 1;
    while (lower_index <= upper_index)
    {
        int mid = (lower_index + upper_index) / 2; // error how to solve the odd number problem 
        if (arr[mid] == num)
        {
            
            return mid ;
        }
        else if (arr[mid] < num)
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
void bubble(int *arr, int n)
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
void prit(int *arr, int n)
{ // we call the address of the array using pointer:
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
}
int main()
{
    int num;
    printf("Enter number that you want to search :");
    scanf("%d", &num);
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("before sorting array :");
    prit(arr, n);   // it work on pass by reference // in it er pass the address  of the array
    bubble(arr, n); // sort the array using buble sort
    printf("\nAfter sorting array :");
    prit(arr, n); // after sorting
    int x = search(arr, n, num);
    if (x != -1)
    {
        printf("\n%d is found at index %d", num, x);
    }
    else
    {
        printf("\n%d is not found in the array", num);
    }
    return 0;
}