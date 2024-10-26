#include<stdio.h>

int main()
{
int i,j,c,n;
   printf("Enter a Number: ");
   scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       c=i;
       for(j=1;j<n;j++)
       {
         printf("%3d ",c);
         c+=n;
       }
     printf("\n");
    }
     
    return 0;
}