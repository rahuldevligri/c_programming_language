/* print 
1
22
333
4444
55555
666666
*/

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter a no. of Row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
         printf("\n");
    } 
}