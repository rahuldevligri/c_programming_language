#include<stdio.h>

int fact(int n)
{
int a=1;
     for(int i=1;i<=n;i++)
     {
      a*=i;
    }
    return a;
}
void main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
printf("Factorial of %d is %d",n,fact(n));
   
}