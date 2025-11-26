
//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include<stdio.h>

typedef struct{
    char name[50];
    int roll;
    int marks;
}student;

int main () {

    int num;
    printf("enter number of students: ");
    scanf("%d", &num);
    student s[num];

    for(int i=1; i<=num; i++){
        printf("Name: ");
        scanf("%s", &s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }
    for(int i=1; i<=num; i++){
        printf("-----------------\n");
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %d\n", s[i].marks);
    }
    return 0;
}
