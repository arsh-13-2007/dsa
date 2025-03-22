#include <stdio.h>
#include <String.h>
typedef struct emp
{
    int id;
    char name[20];
} emp;
int main()
{
    int n;
    printf("enter number of emp :");
    scanf("%d", &n);
    emp e[n];
    emp *ptr = e;
    printf("enter info :\n ");
    for (int i = 0; i < n; i++)
    {
        printf("enter id : ");
        scanf("%d", &(ptr + i)->id);
        printf("enter name : ");
        scanf("%s", &(ptr + i)->name);
    }
    printf("sorted this w.r.t id . selection sorting : ");
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if ((ptr + j)->id < (ptr + min)->id)
            {
                emp temp = *(ptr + min);
                *(ptr + min) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    for ( int i = 0 ; i <n ;i++){
        printf("%d\t",(ptr +i )->id );
        printf("%s",(ptr +i )->name);
        printf("\n");
    }
}