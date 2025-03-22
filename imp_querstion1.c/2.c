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
    student s[n]; // is time it act as array :
    student  *ptr = s;
    for (int i = 0; i < n; i++)
    {
        printf("Enter roll no. of student %d: ", i + 1);
        scanf("%d", &s[i].rollno);
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", &(ptr+ i)->name);
    }
    printf("info ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", s[i].rollno);
        printf("%s", s[i].name);
        printf("\n");
    }
}