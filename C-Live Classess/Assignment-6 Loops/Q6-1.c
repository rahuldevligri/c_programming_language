#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;c<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
              c++;
        }
        if(c<=2)
        {
            printf("%d ",i);
        }
        c=0;
    }

}    