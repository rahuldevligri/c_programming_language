//10. Write a program to print first 10 odd natural numbers in reverse order.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=20;

    while(i>=1)
    {
        if(i%2!=0)
        printf("%d ",i);
        i--;
    }
}
