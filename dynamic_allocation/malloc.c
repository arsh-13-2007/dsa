// allocate the memory in head memory using malloc function

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter %d index value :", i);
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
}