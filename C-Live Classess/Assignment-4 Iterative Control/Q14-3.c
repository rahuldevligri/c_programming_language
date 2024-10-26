//14. Write a program to calculate sum of first N natural numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,N,count=0;
    printf("Enter a Number: ");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
{
    count = count+i;
}
printf("Sum of First %d natural Numbers is %d",N,count);
}
