/* 05_3--> Write a program to find the sum of first 
           n natural numbers using a for loop.?*/

#include<stdio.h>

int main()
{
    int n,i,sum=0;
        printf("Enter the number you want to sum ");
        scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }    
        printf("The sum of %d is = %d ",n,sum);

    return 0;
}