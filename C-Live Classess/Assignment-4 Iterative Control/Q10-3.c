//10. Write a program to print first 10 odd natural numbers in reverse order.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i;

    for(i=20;i>=1;i--)
    {
        if(i%2!=0)
        printf("%d ",i);
    }
}
