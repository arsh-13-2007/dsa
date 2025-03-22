#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int id;
    char name[20];
    int salary;

} emp;
int main()
{
    int num;
    printf("Enter the number of employees: ");
    scanf("%d", &num);
    emp e[num];
    emp *ptr = e;
    for (int i = 0; i < num; i++)
    {
        printf("enter id : ");
        scanf("%d", &(ptr + i)->id);
        printf("enter name:");
        scanf("%s", (ptr + i)->name);
        printf("enter salary:");
        scanf("%d", &(ptr + i)->salary);
    }
    printf("print structure");
    for (int i = 0; i < num; i++)
    {
        printf("id : %d\n", (ptr + i)->id);
        printf("name : %s\n", (ptr + i)->name);
        printf("salary : %d\n", (ptr + i)->salary);
    }
}
