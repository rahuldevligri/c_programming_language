//Write a program to print table of user’s choice.

#include<stdio.h>
#include<conio.h>

void main()
{
    int N;
    printf("Enter a Number: ");
    scanf("%d",&N);
for(int i=1;i<=2*N;i++)
{
    printf("%d X %d = %d\n",N,i,N*i);
}
}