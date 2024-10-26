//Write a program to print first N terms of a Fibonacci series.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,f=0,l=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("***%d terms of a Fibonacci series***\n",n);
    printf("%d ",f);
for(int i=1;i<=n;i++)
{
    f=f+l;
    l=f-l;
    printf("%d ",f);
}
getch();
}