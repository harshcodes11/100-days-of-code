
//Q124: Take two filenames from the user – a source file and a destination file. 
//Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include<stdio.h>

int main () {
    
    FILE *ptr=NULL;
    ptr = fopen("sample.txt", "r");
    FILE *ptr2=NULL;
    ptr2 = fopen("sample1.txt", "a");

    char str[10];
    fgets(str, 6, ptr);
    fprintf(ptr2, "%s", str);

    fclose(ptr);
    fclose(ptr2);

    return 0;
}
