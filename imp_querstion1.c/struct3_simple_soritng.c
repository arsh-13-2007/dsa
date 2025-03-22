#include <stdio.h>
#include <stdio.h>
typedef struct student
{
    char f_name[20];
    char l_name[20];
    int rollno;
} student;
int main()
{
    int n;
    printf("enter number of variable : ");
    scanf("%d", &n);
    student s[n];
    printf("enter info : ");
    for (int i = 0; i < n; i++)
    {
        printf("enter first name : ");
        scanf("%s", s[i].f_name);
        printf("enter last name : ");
        scanf("%s", s[i].l_name);
        printf("enter roll number : ");
        scanf("%d", &s[i].rollno);
    }
    // sort the structure using slection sorting
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (s[j].rollno < s[min].rollno)
            {
                int temp = s[min].rollno;
                s[min].rollno = s[j].rollno;
                s[j].rollno = temp;
            }
        }
    }
    printf("info : ");
    for (int i = 0; i < n; i++)
    {
        printf("first name : %s\n", s[i].f_name);
        printf("last  name : %s\n", s[i].l_name);
        printf("roll number : %d\n", s[i].rollno);
    }
}