#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int age;
    char name[20];
    int salary;
    int address;
} emp;
int main()
{
    int sum = 0;
    int n;
    printf("Enter the number of employees : ");
    scanf("%d", &n);
    emp e[n];
    emp *ptr = e;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name  of employee : ");
        scanf("%s", &(ptr + i)->name);
        printf("Enter the age of employee : ");
        scanf("%d", &e[i].age);
        printf("Enter the salary of employee : ");
        scanf("%d", &e[i].salary);
        printf("Enter the address of employee : ");
        scanf("%d", &e[i].address);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + (ptr + i)->salary;
    }
    float avg = sum / n;
    printf("Average salary of employees is : %.2f", avg);
}
