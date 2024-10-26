//9. Write a program to print first 10 odd natural numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,N;
    printf("Enter a Number: ");
    scanf("%d",&N);

    for(int i=1;i<=2*N;i++)
    {
        if(i%2!=0)
            printf("%d ",i);
    }
}
