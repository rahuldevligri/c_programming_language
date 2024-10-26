#include<stdio.h>

int main()
{
int i,j,k,l;
 for(i=1;i<=4;i++)
 {
    for(j=1;j==1;j++)
    {
          printf("*");
     }
    for(k=1;k<=4;k++)
    {
        if(k==i)
          printf("*");
        else
          printf(" ");
     }
    
    for(k=4;k>=1;k--)
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