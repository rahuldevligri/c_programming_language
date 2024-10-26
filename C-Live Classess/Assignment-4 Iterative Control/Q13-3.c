//13. Write a program to print squares of first N natural numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,N;
    printf("Enter a Number: ");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        printf("%d ",i*i);

    }
}

