// print n Fibonacci series....

#include<stdio.h>

void main()
{
    int a=-1,b=1,c=0,i,n;
        printf("Enter a No.");
        scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
    }
}