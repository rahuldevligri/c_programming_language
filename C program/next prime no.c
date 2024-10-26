// print next prime no.
#include<stdio.h>

int main()
{
   int c=0,i,j,n;
   printf("Enter a no.");
   scanf("%d",&n);
   for (i=n+1;;i++)
   {
     for(j=2;j<=i-1;j++)
     {
        if(i%j==0)
        {
         c++;
         break;
        }  
     }
         if(c==0)
         {
           printf("%d",i);
           break;
        }
    c=0;
    }
    return 0;
}