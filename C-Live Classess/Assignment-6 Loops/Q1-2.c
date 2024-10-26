/*Write a program to check whether a given number is prime or not*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        printf("Its a prime number");
    else
        printf("Its not a prime number");
getch();
}
