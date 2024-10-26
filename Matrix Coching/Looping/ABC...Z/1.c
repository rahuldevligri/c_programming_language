
#include<stdio.h>

int main()
{
int i,j,n;
printf("Enter a number: ");
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    printf("*");
    // for(j=1;j<=n;j++)
    // {
    //     if(j==i)
    //       printf("*");
    //     else
    //       printf(" ");
    //  }

for(j=1;j<=n&&j==i;j++)
    {
          printf("*");
     }
    //printf(" ");
    printf("*");
    printf("\n");
 }
    return 0;
}
