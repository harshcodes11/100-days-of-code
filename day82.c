
//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include<stdio.h>

enum light{
    green,
    red,
    yellow
};


int main () {
    enum light m;
    m = green;

    switch(m){
        case green:
            printf("go\n");
            break;
        case red:
            printf("stop\n");
            break;
        case yellow:
            printf("wait\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}
