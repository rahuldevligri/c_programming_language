/* print 
    1
   232
  34543
 4567654
567898765
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
            printf(" ");
        for(k=i;k<=2*i-1;k++)
            printf("%d",k%10);
        if(i>1)
            for(l=2*i-2;l>=i;l--)
            printf("%d",l%10);
        printf("\n");
    } 
}