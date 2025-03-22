#include <Stdio.h>
#include <string.h>
typedef struct birth
{
    int date;
    int month;
    int year;

} birth;
typedef struct student
{
    char name[50];
    int age;
    birth b;
} student;

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter name : ");
        scanf("%s", s[i].name);
        printf("enter age : ");
        scanf("%d", &s[i].age);
        printf("enter date of birth : ");
        scanf("%d ", &s[i].b.date);
        printf("enter month of birth : ");
        scanf("%d ", &s[i].b.month);
        printf("enter year of birth : ");
        scanf("%d ", &s[i].b.year);
    }
    printf("info :\n");
    for (int i = 0; i < n; i++)
    {
        printf("name : %s\n", s[i].name);
        printf("age : %d\n", s[i].age);
        printf("date of birth : %d\n", s[i].b.date);
        printf("month of birth : %d\n", s[i].b.month);
        printf("year of birth : %d\n", s[i].b.year);
    }
    return 0 ; 
}
 typedef struct date {
    int day;
    int month;
    int year ; 
 } birth ; 
 typedef struct emp {
    int id ;
    char name[50] ;
    birth b ;
    } emp ;
 }
 int main (){
    int n ; 
    printf("Enter the number of employees : ");
    scanf("%d",&n);
    emp e[n] ;
    for (int i = 0; i < n; i++)
    {
        printf("Enter employee id : ");
        scanf("%d",&e[i].id);
        
 }