//Write a program to calculate sum of first N odd natural numbers.

#include <stdio.h>

void main(){
    int N,count=0;
    printf("Enter a number: ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
        count=count+2*i-1;
    printf("Sum = %d",count);
}
