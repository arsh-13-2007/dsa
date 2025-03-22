#include <stdio.h>
#include <String.h>

typedef struct student
{
    int sap;
    char name[20];
    int age;
} student;
int main()
{
    int n;
    printf("enter number of student :");
    scanf("%d", &n);
    student s[n];
    student *ptr = s;
    printf("enter input : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &(ptr + i)->sap);
        scanf("%d", &(ptr + i)->age);
        scanf("%s", &(ptr + i)->name);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %d\n", (ptr + i)->sap, (ptr + i)->name, (ptr + i)->age);
    }
}