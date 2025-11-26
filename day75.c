
//Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
//Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include<stdio.h>

int main () {

FILE *ptr;
ptr = fopen("info.txt", "a");

char str[30];
printf("enter sentence: ");
fgets(str, 30, stdin);

fprintf(ptr, "%s", str);
fclose(ptr);

return 0;
}
