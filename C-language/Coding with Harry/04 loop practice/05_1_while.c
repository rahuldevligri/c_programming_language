/* 05_1--> Write a program to find the sum of first 
         10 natural numbers using a while loop.?*/

#include<stdio.h>

int main()
{
    int i=1, n=10, sum=0;
    while(i<=n){
        sum+=i;
        i++;
    }
        printf("The value of sum(1 to 10) is %d", sum);
    return 0;
}