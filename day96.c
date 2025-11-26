
//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include<Stdio.h>

struct details{
    char name[50];
    int id;
    char date[11];
};

int main () {
    struct details s1;

    printf("enter name: ");
    scanf("%s", &s1.name);
    printf("enter id: ");
    scanf("%d", &s1.id);
    printf("enter date of joining: ");
    scanf("%s", &s1.date);

    printf("Name: %s\n", s1.name);
    printf("ID: %d\n", s1.id);
    printf("Date of joining: %s\n", s1.date);

    return 0;
}
