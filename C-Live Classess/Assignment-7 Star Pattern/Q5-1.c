#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;

    for(i=4;i>=1;i--)
    {
        for(j=1;j<=7;j++)
       {
            if(j>=i&&j<=8-i)
            printf("*");
            else
            printf(" ");
        }
    printf("\n");
    }    
}