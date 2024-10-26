//Write a program to print find Nth term of a Fibonacci series.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,f=0,l=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    f=f+l;
    l=f-l;
}
printf("%dth term of a Fibonacci series = %d ",n,f);
getch();
}