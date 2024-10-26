#include<stdio.h>

int main()
{
int i,j,k,l,n;
 printf("Enter a number: ");
   scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    for(j=1;j==1;j++)
    {
          printf("*");
     }
    for(k=1;k<=n;k++)
    {
        if(k==i)
          printf("*");
        else
          printf(" ");
     }
    for(k=n;k>=1;k--)
    {
        if(k==i)
          printf("*");
        else
          printf(" ");
     }
    
    for(l=1;l==1;l++)
    {
          printf("*");
     }
    printf("\n");
 }
    return 0;
}