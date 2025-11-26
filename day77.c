
//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include<stdio.h>

int main () {
    FILE *fp;
    fp=fopen("input.txt", "r+");
    char ch[50];

    fgets(ch, 50, fp);
    for(int i=0; ch[i] != '\0'; i++){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i]=ch[i]-32;
        }
    }
    printf("%s", ch);
    fclose(fp);
    fp=fopen("input.txt", "w");
    fputs(ch, fp);
    fclose(fp);
    return 0;
}
