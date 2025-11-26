
//Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/
#include<stdio.h>

enum output{
    success,
    failure,
    timeout
};

int main () {
    enum output result;

    printf("success:%d\n", success);
    printf("failure: %d\n", failure);
    printf("timeout:%d\n", timeout);

    return 0;
}
