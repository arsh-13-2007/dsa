#include <stdio.h>
#include <string.h>
typedef struct student
{
    int rollno;
    char name[20];
    float marks;
} student;
void sca_array(student*s ,  int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i].rollno);
        scanf("%s", &s[i].name);
        scanf("%f", &s[i].marks);
    }
}
int main()
{
    student s3 ; 
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    student s[n];
    printf("input :");
    sca_array(s, n);
    printf("array : ");
    student(*ptr) = s;
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %f\n", (ptr+i)->rollno, (ptr+i)->name, (ptr+i)->marks);
    }
}
