//14. Write a program to calculate sum of first N natural numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1,N,count=0;
    printf("Enter a Number: ");
    scanf("%d",&N);
do
{
    count = count+i;
    i++;
}while(i<=N);
printf("Sum of First %d natural Numbers is %d",N,count);
}
