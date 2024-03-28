#include <stdio.h>
typedef struct CourseRecord
{
    char firstName[15];
    char lastName[15];
    char department[10];
    char courcecode[10];
    int marks[3];
} cr;
float avg(cr st)
{
    float avg = 0;
    for (int i = 0; i < 3; i++)
    {
        avg += st.marks[i];
    }
    return (avg / 3);
}
int result(cr st)
{
    float n= avg(st);
    if (n< 35)
    {
        return 0;
    }
    return 1;
}
int main()
{
    cr st;
    printf("Enter the first name : ");
    gets(st.firstName);
    printf("Enter the last name : ");
    gets(st.lastName);
    printf("Enter the Department : ");
    gets(st.department);
    printf("Enter the courcecode : ");
    gets(st.courcecode);
    printf("Enter the marks of 3 subjects : ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &st.marks[i]);
    }
    float avgmMarks = avg(st);
    int Result = result(st);
    printf("Average marks : %.2f\n", avgmMarks);
    if (Result== 1)
    {
        printf("Status : passed\n", Result);
    }
    else
        printf("Status : failed\n", Result);

    return 0;
}