#include<stdio.h>
#include<string.h>

struct StudentData
{
    char stu_name[30];
    int stu_id;
    int semester;
};
int main()
{
    struct StudentData student;
    strcpy(student.stu_name, "ABC");
    student.stu_id = 1234;
    student.semester = 2;
    /* Displaying the values of struct members */
    printf("Student Name is: %s", student.stu_name);
    printf("\nStudent Id is: %d", student.stu_id);
    printf("\nSemester is: %d", student.semester);
    return 0;
}
