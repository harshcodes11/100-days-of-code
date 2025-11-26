
//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include<stdio.h>

enum output{
    success,
    failure,
    timeout
};

int main () {
    enum output result;

    result=timeout;

    switch(result){
        case success:
        printf("completed successfully\n");
        break;
        
        case failure:
        printf("operation failed\n");
        break;

        case timeout:
        printf("operation timed out\n");
        break;
    }
    return 0;
}
