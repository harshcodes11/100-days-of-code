
//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include<stdio.h>

enum output{
    admin,
    user,
    guest
};

int main () {
    enum output result;

    for(int i=0; i<=2; i++){
        if(i==0){
            printf("admin:%d\n", admin);
        }
        else if(i==1){
            printf("user:%d\n", user);
        }
        else{
            printf("guest:%d\n", guest);
        }
    }
    return 0;
}
