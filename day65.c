
//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;
    }

    int count[26] = {0};

    for(int i = 0; str1[i] != '\0'; i++) {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++) {
        if(count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
