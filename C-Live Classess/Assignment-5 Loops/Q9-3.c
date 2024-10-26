//Write a program to print first N terms of a Fibonacci series.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,c,a=-1,b=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("***%d terms of a Fibonacci series***\n",n);
for(int i=1;i<=n;i++)
{
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
}
getch();
}