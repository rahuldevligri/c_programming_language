/*Write a program to print all prime numbers between two given numbers.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,l,c=0;
    printf("Enter First no.:");
    scanf("%d",&i);
     printf("Enter last no.:");
    scanf("%d",&l);
    for(i;i<=l;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if (c<=2)
        {
            printf("%d ",i);
        }
        c=0;       
    }
getch();
}
