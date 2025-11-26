
//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include<stdio.h>

enum gender{
    male,
    female
};

int main (){
    enum gender result;

    printf("enter number:");
    scanf("%d", &result);

    if(result==1){
    printf("male: %d", result);
    }
    else{
        printf("female: %d", result);
    }
    return 0;
}

