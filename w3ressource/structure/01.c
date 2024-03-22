/*
    \Create a structure called "Student"
    \with members name, age, and total 
    \marks. Write a C program to input data 
    \for two students, display their information,
    \and find the average of total marks.
*/
#include <stdio.h>

struct Student
{
    char name[20] ;
    int age       ;
    int totalMarks;
};
void main()
{
    struct  Student firstStudent;
    
    printf("Enter student 1 name : ");
    scanf("%s", &firstStudent.name);
    printf("Enter student 1 age : ");
    scanf("%d", &firstStudent.age);
    printf("Enter student 1 totalMarks : ");
    scanf("%d", &firstStudent.totalMarks);

    printf("%s\n", firstStudent.name);
    printf("%d\n", firstStudent.age);
    printf("%d\n", firstStudent.totalMarks);

}


