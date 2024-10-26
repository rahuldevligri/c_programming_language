//prime between 1 to 100..
#include<stdio.h>

int main()
{
int i,j,c,n=100;
    c=0;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
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