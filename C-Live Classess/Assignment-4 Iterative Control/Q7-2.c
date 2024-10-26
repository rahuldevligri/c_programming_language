//7. Write a program to print first N even natural numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1,N;
    printf("Enter a Number: ");
    scanf("%d",&N);

    do
    {
        if(i%2==0)
            printf("%d ",i);
    i++;
    }while(i<=2*N);
}
