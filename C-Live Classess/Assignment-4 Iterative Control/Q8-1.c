//8. Write a program to print first N even natural numbers in reverse order.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,N;
    printf("Enter a Number: ");
    scanf("%d",&N);
    i=2*N;
    while(i>=1)
    {
        if(i%2==0)
            printf("%d ",i);
        i--;
    }
}
