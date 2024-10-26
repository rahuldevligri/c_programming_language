#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;

    for(i=68;i>=65;i--)
    {
        for(j=65;j<=71;j++)
        {
            if(j<=i)
            printf("%c",j);
            else if(136-j<=i)
            printf("%c",136-j);
            else
            printf(" ");
        }
    printf("\n");
    }    
}