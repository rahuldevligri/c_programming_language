/*Write a program to print all prime numbers under 100*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;
    for(i=1;i<=100;i++)
    {
    for(j=2;j<=i;j++)
    {
        if(i%j==0)
            break;
    }
     if(i<=j)
        printf("%d ", i);
    }
getch();
}
