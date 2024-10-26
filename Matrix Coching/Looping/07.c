/* print 
    1
   121
  12321
 1234321
123454321
*/

#include<stdio.h>
void main()
{
    int i,j,k,l,n;
    printf("Enter a no. of Row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
         for(k=1;k<=i;k++)
        {
            printf("%d",k%10);
        }
        if(i>1){
            for(l=i-1;l>=1;l--)
        {
            printf("%d",l%10);
        }
        }
         printf("\n");
    } 
}