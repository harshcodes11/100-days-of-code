
//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>

int main() {
    char s[10];
    scanf("%s", s);

    int i, j, k;
    int len = 0;  
    int n = 0;

    while (s[n] != '\0') {
        n++;
    }
    for (i = 0; i < n; i++) {      
        int count = 0;
        for (j = i; j < n; j++) {  
            int repeat = 0;
            for (k = i; k < j; k++) { 
                if (s[k] == s[j]) {
                    repeat = 1;
                    break;
                }
            }
            if (repeat == 1) {
                break;
            } else {
                count++;  
            }
        }
        if (count > len) {
            len = count;
        }
    }
    printf("%d\n", len);
    return 0;
}
