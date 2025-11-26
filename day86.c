
//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include<stdio.h>

enum operator{
    add=1,
    sub=2,
    mult=3,
    div=4
};

int main () {
  int n;
  int m;
  enum operator opt;

  printf("enter n: ");
  scanf("%d", &n);

  printf("enter m: ");
  scanf("%d", &m);

  printf("MENU\n 1:ADD\n 2:SUB\n 3:MULT\n 4:DIV\n");
  scanf("%d", &opt); 


                         
    switch(opt) { 
  
      case add:  
      printf("sum= %d", n+m); 
      break;

      case sub:
      printf("sub= %d", n-m);
      break;

      case mult:
      printf("mult= %d", n*m);
      break;

      case div:
      printf("div= %f", n/m);
      break;
      
      default: printf("invalid choice");
      break;
    }


    return 0;
}
