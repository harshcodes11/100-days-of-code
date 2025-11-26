
//Q129: A file numbers.txt contains a list of integers separated by spaces. 
//Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include<stdio.h>

int main () {
    int num;
    int sum=0;
    int count=0;

    FILE *fp;
    fp= fopen("info.txt", "r");

    while(fscanf(fp, "%d", &num)==1){
        sum=sum+num;
        count++;
    }
    int avg=sum/5;
    printf("%d, %d", sum, avg);
    fclose(fp);
    return 0;
}
