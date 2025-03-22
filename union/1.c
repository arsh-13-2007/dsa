#include <stdio.h>
typedef struct student
{
    int rollno;
    char name[20];
    float marks;
} student;
typedef union student1
{
    int rollno;
    char name[20];
    float marks;
} student1;

int main()
{
    student s1;
    student1 s2;
    printf("%d", sizeof(s1)); // sructure give total size of variable 
    printf("%d", sizeof(s2));// union give maximum size among all of them in stucture variable 
}