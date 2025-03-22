#include <Stdio.h> // we using calloc in this code to allocate the heap memory 
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter number size : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter  %d index :", i);
        scanf("%d", (ptr + i));
    }

    for (int i = 0; i < n; i++)

    {
        printf("%d ", *(ptr + i));
    }
}