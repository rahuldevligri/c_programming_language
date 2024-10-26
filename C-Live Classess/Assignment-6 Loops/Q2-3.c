/*Write a program to print all prime numbers under 100*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n=100,c=0;
    for(i=1;i<=n;i++)
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
