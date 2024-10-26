/*Write a program to check whether a given number is prime or not*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,p=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        p++;
    }
    if(p<=2)

        printf("prime");
    else
        printf("not prime");
getch();
}
