
//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include<stdio.h>

enum output{
    admin,
    user,
    guest
};

int main () {
    enum output result;

    result=guest;

    switch(result){
        case admin:
        printf("welcome admin\n");
        break;
        
        case user:
        printf("welcome user\n");
        break;

        case guest:
        printf("welcome guest\n");
        break;
    }
    return 0;
}
