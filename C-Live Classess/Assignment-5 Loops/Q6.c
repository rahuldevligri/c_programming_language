//Write a program to calculate sum of digits of a given number..

#include<stdio.h>

void main()
{
    int n,m,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
while(n!=0)
{
    m=n%10;
    sum=sum+m;
    n=n/10;
}
    printf("Sum of Digits = %d",sum);
}
