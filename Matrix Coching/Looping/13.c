/*
print....
1121
1222
1323
1424
*/
#include<stdio.h>
void main()
{
int i,j,k,n;
 printf("Enter a number: ");
   scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    printf("%d",1);
    for(j=i;j<=i;j++)
    {
        printf("%d",j);
    }
        printf("%d",2);
    for(k=i;k<=i;k++)
    {
        printf("%d",k);
    }    
    printf("\n");  
 }
}