
//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
//Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include<stdio.h>

typedef struct{
    char name[50];
    int roll;
    int marks;
}student;

int main () {
    
    int num;
    FILE *fp;
    fp=fopen("info.txt", "a+");

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
        
        printf("Updated memory\n");
    }
    for(int i=1; i<=num; i++){
        fputs("-----------------\n", fp);
        fprintf(fp, "Name: %s\n", s[i].name);
        fprintf(fp, "Roll Number: %d\n", s[i].roll);
        fprintf(fp, "Marks: %d\n", s[i].marks);
    }
    printf("Records have been stored successfully");
    return 0;
}
