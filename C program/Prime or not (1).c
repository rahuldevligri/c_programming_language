//prime or not..
#include<stdio.h>

int main()
{
int i,n;
    printf("Enter a no.");
    scanf("%d",&n);
 for(i=2;i<n;i++)
 {
    if(n%i==0)
    break;
 }
   if(i==n)
      printf("Prime");  
   else
      printf("Not Prime");
 return 0;
}