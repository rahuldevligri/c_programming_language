#include<stdio.h>

int num(int n)
   {
     int cnt=0;
     for(int i=1;i<=n;i++)
    {
        cnt+=i;
     }
    return cnt;
}
void main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
printf("Sum of square of 1stEven number %d",2*num(n));
}