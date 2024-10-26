//Write a program to count digits in a given number.

#include<stdio.h>

void main()
{
    int n,m,count=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
while(n!=0)
{
    m=n%10;
    count++;
    n=n/10;
}
    printf("Digits in a given number is: %d",count);
}
