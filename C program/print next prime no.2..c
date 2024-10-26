// print next prime no.
#include<stdio.h>

int main()
{
   int c=0,i=2,n;
       printf("Enter a no.");
       scanf("%d",&n);
     do
     {
       n=n+1; 
        if(n%i)
        {
         printf("%d",n);
         break;
        }  
        else
           c++;    
     i++;   
    }while(c>0);
    return 0;
}