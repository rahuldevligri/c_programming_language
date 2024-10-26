/* 05_2--> Write a program to find the sum of user input n 
         natural numbers using a while loop.?*/

#include<stdio.h>

int main()
{
    int n,i=1,sum=0;
        printf("Enter the number you want sum ");
        scanf("%d",&n);
    while(i<=n)
    {
        sum+=i;
        i++;
    }
        printf("The sum of %d is = %d",n,sum);
    return 0;    
}
