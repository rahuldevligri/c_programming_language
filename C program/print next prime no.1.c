// print next prime no.
#include<stdio.h>

int main()
{
   int c=0,i=2,j,n=10;
     for(j=n+1;;j++)
     {
        
        if(j%i)
        {
         printf("%d",j);
         break;
        }  
        else
           c++;
     i++;   
    }
    return 0;
}