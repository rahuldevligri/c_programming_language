/*Write a program to print all prime numbers between two given numbers.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,l;
    printf("Enter First no.:");
    scanf("%d",&i);
    printf("Enter last no.:");
    scanf("%d",&l);
    for(i;i<=l;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if (i==j)
            printf("%d ",i);     
    }
getch();
}
