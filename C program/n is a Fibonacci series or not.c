/* whether a given no is a term in
   Fibonacci series or not...
*/
#include<stdio.h>

void main()
{
    int a=-1,b=1,c=!0,i,n=0;
        printf("Enter a No.");
        scanf("%d",&n);
    while(c<=n)
    {
       c=a+b;
       a=b;
       b=c;
    if(a==n)
      {
        printf("yes");
        break;
      }
    }
    if(a!=n){
    printf("not");
    }
}