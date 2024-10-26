#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;

    for(i=4;i>=1;i--)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=i)
            printf("%d",j);
            else if(8-j<=i)
            printf("%d",8-j);
            else
            printf(" ");
        }
    printf("\n");
    }    
}