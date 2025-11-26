//Q105: Write a program to take an integer array nums of size n, and print the majority element. 
//The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no 
//such element exists. Note: Majority Element is not necessarily the element that is present most 
//number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>

int main() {

    int num[]={2,2,1,1,1,2,2};
    int count;

    for (int i = 0; i <= 6; i++) {
        count = 0;
        for (int j = 0; j <= 6; j++) {
            if (num[j] == num[i]) {
                count++;
            }
        }
        if (count > 7 / 2) {
            printf("%d\n", num[i]);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
