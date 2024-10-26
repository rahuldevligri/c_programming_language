//Write a program to print find Nth term of a Fibonacci series.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,f=0,l=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
for(int i=0;f==n;i++)
{
    f=f+l;
    l=f-l;
}
if(f!=n)
    {
    printf("its not a febonachi");
    }
    else
    printf("its a fibonachi serise number");
getch();
}
