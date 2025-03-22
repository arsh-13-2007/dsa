#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the number to be searched: ");
    scanf("%d", &x);
    int lower_index = 0 ; 
    int upper_index = n - 1;
    while (lower_index <= upper_index)
    {
        int mid = (lower_index + upper_index) / 2;
        if (arr[mid] == x)
        {
            printf(" search end  index of the number is : %d", mid);
            return 0;
        }
        else if (arr[mid] < x)
        {
            lower_index = mid + 1;
        }
        else
        {
            upper_index = mid - 1;
        }
    }
}