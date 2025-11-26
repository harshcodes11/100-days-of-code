
//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/
#include<stdio.h>

enum day{
    sunday=1,
    monday=2,
    tuesday=3,
    wednesday=4,
    thursday=5,
    friday=6,
    saturday=7
};

int main () {
    enum day today= monday;
    printf("%d", today);

    return 0;
}
