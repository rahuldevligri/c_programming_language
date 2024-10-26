//prime between 2 number..
#include<stdio.h>

int main()
{
int i,j,c=0,n;
printf("Enter 2 number");
scanf("%d%d",&i,&n);
 for(i;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
    if(i%j==0)
    {
    c++;
    }
    if(c>2)
    break;
   }
    if(c!=3)
     printf("%d ",i);
    c=0;
    }
 return 0;
}