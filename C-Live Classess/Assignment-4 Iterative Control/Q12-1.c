//12. Write a program to print first N odd natural numbers in reverse order.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,N;
    printf("Enter a Number: ");
    scanf("%d",&N);
    i=N;

    while(i>=1)
    {
       printf("%d ",2*i-1);
       i--;
    }
}
