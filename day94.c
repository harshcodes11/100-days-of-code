

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int maxlen = 0, curlen = 0, maxst = 0;

    printf("enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\n') {  
            curlen++;
            if(curlen > maxlen) {     
                maxlen = curlen;      
                maxst = i - curlen + 1; 
            }
        } 
        else {
            curlen = 0;
        }
    }
    for(int i = maxst; i < maxst + maxlen; i++) {
        printf("%c", str[i]);
    }
    return 0;
}
