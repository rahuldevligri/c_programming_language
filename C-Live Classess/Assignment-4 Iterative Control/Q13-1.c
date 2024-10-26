//13. Write a program to print squares of first N natural numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1,N;
    printf("Enter a Number: ");
    scanf("%d",&N);

    while(i<=N)
    {
        printf("%d ",i*i);
        i++;
    }
}
