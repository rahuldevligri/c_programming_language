//prime or not..
#include<stdio.h>

int main()
{
int i,c,n=9;
    c=0;
 for(i=2;i<n;i++)
 {
    if(n%i==0)
    {
    c++;
    break;
    }
 }
   if(c>0)
      printf("Not Prime");
      
    else
      printf("Prime");
      
 return 0;
}