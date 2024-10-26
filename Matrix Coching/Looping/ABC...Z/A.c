#include<stdio.h>

int main()
{
int n,i,j,k;
   printf("Enter a number: ");
   scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    for(j=1;j<=n-i;j++)
    {
        printf(" ");
    }
    printf("*");
    for(k=1;k<=2*(i-1)-1;k++)
    {
        if(i==(n/2)+1)
            printf("*");
        else
            printf(" ");
    }
    if(i>1)
    {
        printf("*");
    }
    printf("\n");
 }
    return 0;
}