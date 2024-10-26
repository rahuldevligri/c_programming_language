//Write a program to calculate fectorial of first N odd natural numbers.

#include <stdio.h>

void main(){
    int N,count=1;
    printf("Enter a number: ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
        count=count*i;
    printf("Sum = %d",count);
}
