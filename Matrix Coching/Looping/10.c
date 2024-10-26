/* print this shap
1
23
456
7890
12345
*/    

#include<stdio.h>
void main()
{
    char a,i,j,n;
    printf("Enter a no. of Row: ");
    scanf("%d",&n);
    a=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
                printf("%d",a%10);
                a++;
        }
         printf("\n");
    } 
}