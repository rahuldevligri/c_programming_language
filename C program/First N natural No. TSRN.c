#include<stdio.h>

int num(int n)
   {
     for(int i=1;i<=n;i++)
    {
      printf("%d",i);
    }
   }
void main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   num(n);
}