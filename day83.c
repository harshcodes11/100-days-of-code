
//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include<stdio.h>

enum month{
    january,
    febuary,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main () {
    enum month m;
    m = febuary;

    switch(m){
        case january:
            printf("31 days\n");
            break;
        case febuary:
            printf("28 or 29 days\n");
            break;
        case march:
            printf("31 days\n");
            break;
        case april:
            printf("30 days\n");
            break;
        case may:
            printf("31 days\n");
            break;
        case june:
            printf("30 days\n");
            break;
        case july:
            printf("31 days\n");
            break;
        case august:
            printf("31 days\n");
            break;
        case september:
            printf("30 days\n");
            break;
        case october:
            printf("31 days\n");
            break;
        case november:
            printf("30 days\n");
            break;
        case december:
            printf("31 days\n");
            break;
        default:
            printf("Invalid month number\n");
    }

    return 0;
}
