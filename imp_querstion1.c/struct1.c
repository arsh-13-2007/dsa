#include <stdio.h>
#include <string.h>
typedef struct student
{
    int rollno;
    char name[20];
    float marks;
} student;
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    student s[n];
    student *ptr = s;
    printf("enter info : ");
    for (int i = 0; i < n; i++)
    {
        printf("Enter roll no : ");
        scanf("%d", &(ptr + i)->rollno);
        printf("Enter name : ");
        scanf("%s", &(ptr + i)->name);
        printf("Enter marks : ");
        scanf("%f", &(ptr + i)->marks);
    }
    printf("print info : ");
    for (int i = 0; i < n; i++)
    {
        printf("roll no : %d\n", (ptr + i)->rollno);
        printf("name : %s\n", (ptr + i)->name);
        printf("marks : %0.2f\n", (ptr + i)->marks);
    }
}