#include <Stdio.h>
typedef struct student
{
    char f_name[20];
    char l_name[20];
    int rollno;

} student;
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the first name of student %d: ", i + 1);
        scanf("%s", &s[i].f_name);
        printf("Enter the last name of student %d: ", i + 1);
        scanf("%s", &s[i].l_name);
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &s[i].rollno);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j].rollno > s[j + 1].rollno)
            {
                student  temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("sorted array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", s[i].rollno);
        printf("%s", s[i].f_name);
        printf("%s", s[i].l_name);
       
        }
}