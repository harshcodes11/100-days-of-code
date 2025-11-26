
//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include<stdio.h>

typedef struct{
    char name[50];
    int roll;
    int marks;
}student;

int main () {

    student s[1];

    printf("Name: ");
    scanf("%s", &s[1].name);
    printf("Roll Number: ");
    scanf("%d", &s[1].roll);
    printf("Marks: ");
    scanf("%d", &s[1].marks);

    printf("Name: %s\n", s[1].name);
    printf("Roll Number: %d\n", s[1].roll);
    printf("Marks: %d\n", s[1].marks);

    return 0;
}
