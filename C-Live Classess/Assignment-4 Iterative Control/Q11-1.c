//11. Write a program to print first N odd natural numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,N;
    printf("Enter a Number: ");
    scanf("%d",&N);
    i=1;
    while(i<=N)
    {
        printf("%d ",2*i-1);
        i++;
    }
}