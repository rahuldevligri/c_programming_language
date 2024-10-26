//9. Write a program to print first 10 odd natural numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1,N;
    printf("Enter a Number: ");
    scanf("%d",&N);

    while(i<=2*N)
    {
        if(i%2!=0)
            printf("%d ",i);
        i++;
    }
}
