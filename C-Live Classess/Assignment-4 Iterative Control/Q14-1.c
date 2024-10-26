//14. Write a program to calculate sum of first N natural numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1,N,count=0;
    printf("Enter a Number: ");
    scanf("%d",&N);
while(i<=N)
{
    count = count+i;
    i++;
}
printf("Sum of First %d natural Numbers is %d",N,count);
}
