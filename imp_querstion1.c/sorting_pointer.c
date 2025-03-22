#include <stdio.h>
typedef struct student
{
    int rollno;
    char f_name[20];
    char l_name[20];
} student;
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    student s[n];
    student *ptr = s;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the  first name : ");
        scanf("%s", &(ptr + i)->f_name);
        printf("enter  last name : ");
        scanf("%s", &(ptr + i)->l_name);
        printf("enter roll number : ");
        scanf("%d", &(ptr + i)->rollno);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if ((ptr + j)->rollno > (ptr + j + 1)->rollno)
            {
                student temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
    printf("sorted array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %s\n", (ptr + i)->rollno, (ptr + i)->f_name, (ptr + i)->l_name);
    }
}