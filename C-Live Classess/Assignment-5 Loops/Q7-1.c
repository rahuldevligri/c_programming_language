#include<stdio.h>

void main()
{
    int x=0,n,k;
    printf("Enter a Number: ");
    scanf("%d",&n);

    while(n>0)
    {
       k=n%10;
       x=x*10+k;
       n=n/10;
    }
    printf("%d",x);
}