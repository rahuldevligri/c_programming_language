// Write a program in C to print first 50 natural numbers using recursion.

#include<stdio.h>
void num(int n){
    if(n<=50){
        printf(" %d ",n);
        num(n+1);
    }
}
int main (){
    int n = 1;
       printf("The natural numbers are :");
       num(n);
       printf("\n\n");
   return 0;
}