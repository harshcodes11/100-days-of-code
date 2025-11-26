
//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student topstud(struct Student s[]) {
    struct Student top = s[0];
    for(int i = 1; i <= 2; i++) {
        if(s[i].marks > top.marks) {
            top = s[i];
        }
    }
    return top;                
}

int main() {
    struct Student s[3];

    for(int i = 0; i <= 2; i++) {
        printf("Enter name roll marks: ");
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }
    struct Student top = topstud(s);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);
    return 0;
}
