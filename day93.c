
//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include<stdio.h>

typedef struct{
    char name[50];
    int roll;
    int marks;
}student;

int main () {

    student s[3];

    for(int i=0; i<=2; i++){
        printf("Name: ");
        scanf("%s", &s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }
    student top= s[0];

    for(int i=0; i<=2; i++){
        if(s[i].marks > top.marks){
            top= s[i];
        }
    }
    printf("highest marks obtained by: \n")
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll);
    printf("Marks: %d\n", top.marks);

    return 0;
}
