/*Write a program to print next prime number of a given number...*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;
    printf("Enter a number:");
    scanf("%d",&i);
    for(i+=1;;i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
        {
            printf("next prime no. is %d",i);
            break;
        }
    }
getch();
}