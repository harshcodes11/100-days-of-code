
//Q128: Read a text file and count how many vowels and consonants are in the file. 
//Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include<stdio.h>

int main () {

    int vowel=0; 
    int consonant=0; 
    char a[50];
    FILE *fp;
    fp=fopen("info.txt", "r");
    fgets(a,50,fp);

    for(int i=0; a[i] != '\0'; i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            vowel++;
        }
        else if(a[i]==' '){
            continue;
        }
        else{
            consonant++;
        }
    }
    fclose(fp);
    printf("consonant=%d, vowel=%d", consonant, vowel);
    return 0;
}
