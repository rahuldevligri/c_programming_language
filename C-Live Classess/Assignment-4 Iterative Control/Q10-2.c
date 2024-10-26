//10. Write a program to print first 10 odd natural numbers in reverse order.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=20;

    do
    {
        if(i%2!=0)
        printf("%d ",i);
        i--;
    }while(i>=1);
}
